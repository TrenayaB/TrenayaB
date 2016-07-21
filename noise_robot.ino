int TONE = 5;
void setup() {
  pinMode (TONE, OUTPUT);
  // put your setup code here, to run once:

}
 
void loop() {
   tone(tone, 2259);
   delay(100);
   tone(5, 65535);
   delay(100);
  // put your main code here, to run repeatedly:

}

