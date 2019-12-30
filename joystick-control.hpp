#include <Arduino.h>
#include <Servo.h>

#define SERVO1_PIN 9
#define SERVO2_PIN 5

#define STICK1X_PIN A0
#define STICK1Y_PIN A1

class JoystickControl
{
private:
    int stick1_x;
    int stick1_y;
    int servo1_pos;
    int servo2_pos;

public:
    Servo *servo1;
    Servo *servo2;

    void readStick1XAndGo();
    void readStick1YAndGo();
    
    
    JoystickControl(Servo* servo1, Servo* servo2);

    ~JoystickControl();
};