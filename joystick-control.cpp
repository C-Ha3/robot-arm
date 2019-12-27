#include <Servo.h>
#include "joystick-control.hpp"

/******************************************************************************/
//Constructor and Destructore


JoystickControl::JoystickControl(int servo1Pin, int servo2Pin, int joyXPin, int joyYPin);
  this->servo1 = servo1Pin;
  this->servo2 = servo2Pin;

  this->joyX = joyXPin;
  this->joyY = joyYPin;

JoystickControl::JoystickControl() {
  this->servo1 = 3;
  this->servo2 = 5;

  this->joyX = 0;
  this->joyY = 1;
}

JoystickControl::~JoystickControl();
/******************************************************************************/