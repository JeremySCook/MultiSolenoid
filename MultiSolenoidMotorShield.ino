// Multi-solenoid cycle routine by Jeremy S. Cook
// W/ Arduino motor shield. Requires library found here: https://github.com/adafruit/Adafruit-Motor-Shield-library
// Modified from Public domain Adafruit Motor shield library

#include <AFMotor.h>

AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");

  // turn on motor
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  
}

void loop() {
  motor2.run(FORWARD);
  delay(75);
  motor2.run(RELEASE);
  //delay(75);
  motor3.run(FORWARD);
  delay(75);
  motor3.run(RELEASE);
  //delay(75);
  motor4.run(FORWARD);
  delay(75);
  motor4.run(RELEASE);
  delay(75);
}
