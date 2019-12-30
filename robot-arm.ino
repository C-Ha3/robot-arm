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

  if (analogRead(A0) > 1000 || analogRead(A0) < 100) {
  robotControl->readStick1XAndGo();
  Serial.println(analogRead(A0));
  }

  if (analogRead(A1) > 1000 || analogRead(A1) < 100)
  {
    robotControl->readStick1YAndGo();
    Serial.println(analogRead(A1));
  }
}
