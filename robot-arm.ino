#include "joystick-control.hpp"

Servo* servo1 = new Servo();
Servo* servo2 = new Servo();

JoystickControl* robotControl =  new JoystickControl(servo1, servo2);
int currPos = 0;

void setup()
{

  Serial.begin(9600);

  robotControl->servo1->attach(SERVO1_PIN);

}

void loop()
{
  delay(1000);
  currPos = robotControl->servo1->read();
  Serial.print("The current position is: ");
  Serial.println(currPos);
  robotControl->servo1->write(0);
  delay(1000);
  currPos = robotControl->servo1->read();
  Serial.print("The current position is: ");
  Serial.println(currPos);
  robotControl->servo1->write(180);
}