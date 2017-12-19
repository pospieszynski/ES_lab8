void delay(unsigned int);
void configurePIT();
void configureLEDs();
void configurreButtons();
void configureClock();
void configureRegisters();
void turnOnDS2();
void turnOffDS2();
void turnOnDS1();
void turnOffDS1();
void handleButtonPressed();
unsigned int checkIfLeftButtonPressed();
unsigned int checkIfRightButtonPressed();
unsigned int checkIfTimerStoppped();
void clearTimerStatusRegister();
void enablePIT();
void disablePIT();
void enablePullUpBP1();
void enablePullUpBP2();
void disablePullUpBP1();
void disablePullUpBP2();
int pullUpStatusBP1();
int pullUpStatusBP2();
