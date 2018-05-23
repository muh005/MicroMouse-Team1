#include "Led.h"

GPIO LLED, RLED;
void initLED(void) {
		LLED = initIO(PC15, OUTPUT);
		RLED = initIO(PC10, OUTPUT);
}
void L_LED_ON(void) {
		digitalWrite(LLED, HIGH);
}
void L_LED_OFF(void) {
		digitalWrite(LLED, LOW);
}
void R_LED_ON(void) {
		digitalWrite(RLED, HIGH);
}
void R_LED_OFF(void) {
		digitalWrite(RLED, LOW);
}
void blinkLED(uint8_t numBlinks) {
		for(int blinki = 0; blinki < numBlinks; blinki++) {
				L_LED_ON();
				delay(30);
				L_LED_OFF();
				R_LED_ON();
				delay(30);
				R_LED_OFF();
		}	
}