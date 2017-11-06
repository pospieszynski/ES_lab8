#include "FIFO.h"

void initFIFO (struct FIFO* fifo) {
  fifo->head=0;
  fifo->tail=0;
}

void emptyFIFO (struct FIFO* fifo) {
  fifo->head = fifo->tail;
}

int pushToFIFO (struct FIFO *Fifo, char data) {
  if ( (( Fifo->tail - Fifo->head) == 1 ) || ( (Fifo->tail == 0 && Fifo->head == BUFFER_SIZE ) ) )
    return FAILURE;
  /* CRITICAL POINT */
  Fifo->head = (Fifo->head + 1) % (BUFFER_SIZE+1);
  Fifo->buffer[Fifo->head] = data;
  return SUCCESS;
}

int popFromFIFO (struct FIFO *Fifo, char *data) {
  if ((Fifo->head != Fifo->tail)) {
    /* CRITICAL POINT */
    *data = Fifo-> buffer[Fifo->tail];
    Fifo->tail = (Fifo->tail + 1) % (BUFFER_SIZE+1);
    return SUCCESS;
  } else {
    return FAILURE;
  }
}