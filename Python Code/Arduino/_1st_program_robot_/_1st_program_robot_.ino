int LEDPIN = 4;
int LEDPIN2 = 5;
void setup(){
  pinMode(LEDPIN, OUTPUT);
  pinMode(LEDPIN2, OUTPUT); 
  // put your setup code here, to run once:  
}

void loop(){
  digitalWrite(LEDPIN, HIGH);
  delay(100);
  digitalWrite(LEDPIN, LOW);
  delay(100);
  digitalWrite(LEDPIN2, LOW);
  delay(100);
  digitalWrite(LEDPIN2, HIGH);
  delay(100);
  // put your main code here, to run repeatedly:    
}
