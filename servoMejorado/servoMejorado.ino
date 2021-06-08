#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

#include <Servo.h>
Servo myservo;
int val;
int buttonState = 0;

void setup() {
  myservo.attach(8);
  pinMode(9, INPUT);
}

void loop()
{
  buttonState = digitalRead(9);

  if (buttonState == HIGH) {
    val = 90;

  }
  else {
    val = 0;
  }
  myservo.write(val);
  delay(15);
}
