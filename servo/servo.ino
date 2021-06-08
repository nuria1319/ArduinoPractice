#include <Servo.h>
Servo servo1;
int angulo = 0;
int pin=9;

void setup(){
    servo1.attach(pin);

}

void loop(){
    for(angulo = 0; angulo<=180; angulo +=1){
        servo1.write(angulo);
        delay(25);
    }
    for(angulo<=180; angulo = 0;  angulo -=1){
        servo1.write(angulo);
        delay(25);
    }
}