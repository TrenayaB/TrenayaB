//Serial monitor
void Back_motion(){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
}
void Turn_right(){
  delay(1000);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1500);
}
void setup(){
Serial.begin(9600);
//Serial.print("this doesnt make a new line");
//Serial.println("this does");
//Serial.println(Left);
//Serial.println(Right);
}

void loop(){
byte ver = digitalRead(5); //outputs HIGH or LOW
byte ver = digitalRead(7);
//Reading Buttons


//Conditionals
if(Left ==0 and Right ==0 ){
  Serial.println(Left);
  Serial.println(Right);
  Back_motion();
  Turn_right();
  
}
else if(5 < 5){
  Serial.println("5 isnt less than 5 so this doesn't happen");
}
else{
  Serial.println("neither does this");
}
}
