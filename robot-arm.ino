#include "joystick-control.hpp"

Servo *servo1 = new Servo();
Servo *servo2 = new Servo();

JoystickControl *robotControl = new JoystickControl(servo1, servo2);
int currPos = 0;

void setup()
{

  Serial.begin(9600);

  robotControl->servo1->attach(SERVO1_PIN);
  robotControl->servo1->write(90);
  robotControl->servo2->attach(SERVO2_PIN);
  robotControl->servo2->write(90);
  
}

void loop()
{
  robotControl->readAllSticks();
  delay(5);
  robotControl->readStick1XAndGo();
  delay(5);
  robotControl->readStick1YAndGo();
  delay(5);
}
