#include <Arduino.h>
#include <Servo.h>

#define SERVO1_PIN 9
#define SERVO2_PIN 5

class JoystickControl
{
private:

public:
    Servo *servo1;
    Servo *servo2;
    JoystickControl(Servo* servo1, Servo* servo2);

    ~JoystickControl();
};