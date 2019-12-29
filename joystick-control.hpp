#include <Arduino.h>
#include <Servo.h>

#define SERVO1_PIN 9
#define SERVO2_PIN 5

class JoystickControl {
    private:
       
    public:
        JoystickControl();

        Servo servo1;
        Servo servo2;

        void servo1To(int angle1) {servo1.write(angle1);}
        void servo2To(int angle1) {servo2.write(angle1);}
        void servo1move1();
        void servo1move2();

        int readServo1() {servo1.read();}
        int readServo2() {servo2.read();}

        ~JoystickControl();

};