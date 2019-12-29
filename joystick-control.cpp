#include "joystick-control.hpp"

/******************************************************************************/
//Constructor and Destructore
JoystickControl::JoystickControl(Servo *servo1, Servo *servo2)
{
  this->servo1 = servo1;
  this->servo2 = servo2;
}

JoystickControl::~JoystickControl();
/******************************************************************************/