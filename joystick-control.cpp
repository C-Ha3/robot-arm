#include "joystick-control.hpp"

/******************************************************************************/
//Constructor and Destructore
JoystickControl::JoystickControl(Servo *servo1, Servo *servo2)
{
  this->servo1 = servo1;
  this->servo2 = servo2;

  pinMode(STICK1X_PIN, INPUT);
  pinMode(STICK1Y_PIN, INPUT);
}

void JoystickControl::readStick1XAndGo()
{
  stick1_x = analogRead(STICK1X_PIN);
  servo1_pos = map(stick1_x, 0, 1023, 0, 180);

  servo1->write(servo1_pos);
}

void JoystickControl::readStick1YAndGo()
{
  stick1_y = analogRead(STICK1Y_PIN);
  servo2_pos = map(stick1_y, 0, 1023, 0, 180);
  
  servo2->write(servo2_pos);
}

JoystickControl::~JoystickControl();
/******************************************************************************/