#include "Quirkbot.h"

CircuitTouch circuitTouch1;
CircuitTouch circuitTouch2;
CircuitTouch circuitTouch3;
CircuitTouch circuitTouch4;
CircuitTouch circuitTouch5;
KeyPress keyPress1;
KeyPress keyPress2;
KeyPress keyPress3;
KeyPress keyPress4;
KeyPress keyPress5;

void setup(){
	circuitTouch1.place.set(PLACE_HORN);
	circuitTouch1.sensitivity.set(0.5);
	circuitTouch1.min.set(0);
	circuitTouch1.max.set(1);

	circuitTouch2.place.set(PLACE_LEFT_ARM);
	circuitTouch2.sensitivity.set(0.5);
	circuitTouch2.min.set(0);
	circuitTouch2.max.set(1);

	circuitTouch3.place.set(PLACE_LEFT_LEG);
	circuitTouch3.sensitivity.set(0.5);
	circuitTouch3.min.set(0);
	circuitTouch3.max.set(1);

	circuitTouch4.place.set(PLACE_RIGHT_LEG);
	circuitTouch4.sensitivity.set(0.5);
	circuitTouch4.min.set(0);
	circuitTouch4.max.set(1);

	circuitTouch5.place.set(PLACE_RIGHT_ARM);
	circuitTouch5.sensitivity.set(0.5);
	circuitTouch5.min.set(0);
	circuitTouch5.max.set(1);

	keyPress1.trigger.connect(circuitTouch1.out);
	keyPress1.key.set(KEY_A);

	keyPress2.trigger.connect(circuitTouch2.out);
	keyPress2.key.set(KEY_S);

	keyPress3.trigger.connect(circuitTouch3.out);
	keyPress3.key.set(KEY_D);

	keyPress4.trigger.connect(circuitTouch4.out);
	keyPress4.key.set(KEY_F);

	keyPress5.trigger.connect(circuitTouch5.out);
	keyPress5.key.set(KEY_G);
}

void loop(){

}
