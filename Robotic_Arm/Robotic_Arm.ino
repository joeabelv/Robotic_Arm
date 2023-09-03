#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

const int potpin1 = A0;
const int potpin2 = A1;
const int potpin3 = A2;
const int potpin4 = A3;

int val1;
int val2;
int val3;
int val4;

void setup() {
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(11);
}

void loop() {
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 180, 0);
  myservo1.write(val1);
  delay(10);

  val2 = analogRead(potpin2);
  val2 = map(val2, 0, 1023, 180, 0);
  myservo2.write(val2);
  delay(10);

  val3 = analogRead(potpin3);
  val3 = map(val3, 0, 1023, 180, 0);
  myservo3.write(val3);
  delay(10);

  val4 = analogRead(potpin4);
  val4 = map(val4, 0, 1023, 180, 0);
  myservo4.write(val4);
  delay(10);
}