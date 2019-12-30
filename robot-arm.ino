#include "joystick-control.hpp"

Servo *servo1 = new Servo();
Servo *servo2 = new Servo();

JoystickControl *robotControl = new JoystickControl(servo1, servo2);

void setup()
{

  Serial.begin(9600);



  robotControl->servo1->attach(SERVO1_PIN);
  robotControl->servo2->attach(SERVO2_PIN);
  
}

void loop()
{
  robotControl->readAllSticks();
  delay(5);
  robotControl->readStick1XAndGo();
  robotControl->readStick1YAndGo();
}
