#include <Arduino.h>

class JoystickControl {
    private:
        int servo1 = NULL; //Digital PWM pin used by the servo 1
        int servo2 = NULL; //Digital PWM pin used by the servo 2
        int joyX = 0;   //Analog pin to which the joystick (X) is connected
        int joyY = 1;   //Analog pin to which the joystick (Y) is connected

    public:
        JoystickControl();
        // JoystickControl(int servo1Pin, int servo2Pin, int joyXPin, int joyYPin);
        int readServoX();
        int readServoY();

        void setServoX(int pos);
        void setServoY(int pos);

        int getServo1() {return this->servo1;}
        int getServo2() {return this->servo2;}
        int getJoyX() {return this->joyX;}
        int getJoyY() {return this->joyY;}

        void setServo1(int pin) {this->servo1 = pin;}
        void setServo2(int pin) {this->servo2 = pin;}
        void setJoyX(int pin) {this->joyX = pin;}
        void setJoyY(int pin) {this->joyY = pin;}
        

        ~JoystickControl();



};