#include <Servo.h>
#include "joystick-control.hpp"

/******************************************************************************/
//Constructor and Destructore
JoystickControl::JoystickControl(){

  servo1.attach(SERVO1_PIN);
  servo2.attach(SERVO2_PIN);

}

void JoystickControl::servo1move1() {
    digitalWrite(SERVO1_PIN, HIGH);
    delayMicroseconds(1450); // Duration of the pusle in microseconds
    digitalWrite(SERVO1_PIN, LOW);
    delayMicroseconds(18550); // 20ms - duration of the pusle

}
void JoystickControl::servo1move2() {
    digitalWrite(SERVO1_PIN, HIGH);
    delayMicroseconds(2300); // Duration of the pusle in microseconds
    digitalWrite(SERVO1_PIN, LOW);
    delayMicroseconds(18550); // 20ms - duration of the pusle

}

JoystickControl::~JoystickControl();
/******************************************************************************/