#include "joystick-control.hpp"

/******************************************************************************/
//Constructor and Destructore
JoystickControl::JoystickControl(Servo *servo1, Servo *servo2)
{
  this->servo1 = servo1;
  this->servo2 = servo2;

  pinMode(STICK1X_PIN, INPUT);
  pinMode(STICK1Y_PIN, INPUT);

  stick1_y = analogRead(STICK1Y_PIN);
  stick1_x = analogRead(STICK1X_PIN);
  servo1_pos = this->servo1->read();
  servo2_pos = this->servo2->read();
}

void JoystickControl::readAllSticks()
{
  this->stick1_x = analogRead(STICK1X_PIN);
  this->stick1_y = analogRead(STICK1Y_PIN);
}

void JoystickControl::readStick1XAndGo()
{
  if (stick1_x > 1000 && stick1_x <= 1024)
  {
    servo1->write(this->servo1_pos++);
  }

  if (stick1_x < 100 && stick1_x >= 0)
  {
    servo1->write(this->servo1_pos--);
  }
}

void JoystickControl::readStick1YAndGo()
{
  if (stick1_y > 1000 && stick1_y <= 1024)
  {
    servo2->write(this->servo2_pos++);
  }

  if (stick1_y < 100 && stick1_y >= 0)
  {
    servo2->write(this->servo2_pos--);
  }
}

JoystickControl::~JoystickControl();
/******************************************************************************/