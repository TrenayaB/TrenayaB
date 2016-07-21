#include <Servo.h>
Servo servoRight;
Servo servoLeft;

void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13);
servoRight.attach(12);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
}
void loop() {
  // put your main code here, to run repeatedly:
servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1700); 
servoLeft.writeMicroseconds(1500);
servoLeft.writeMicroseconds(2000);
servoRight.writeMicroseconds(1000);
servoRight.writeMicroseconds(1500);
servoLeft.writeMicroseconds(1500);
}
