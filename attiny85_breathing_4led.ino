/*

Attiny85 with pwm


*/
int pwmPin = 0;


void setup() {                
  pinMode(pwmPin, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i=5; i<=255; i++)
  {
    analogWrite(pwmPin, i);
    delay(10);
  }
  for (int i=0; i<=250; i++)
  {
    analogWrite(pwmPin, 255-i);
    delay(10);
  }
}






