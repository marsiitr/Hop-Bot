int motorPin= 9;
 int dir= 10;



void setup() {
pinMode(motorPin,OUTPUT); 
pinMode(dir,OUTPUT); 
}

void loop() {
  int i=0;
  if(i>255)
  analogWrite(motorPin,255);
  else
  {i+=20;
  analogWrite(motorPin,i);
  delay(10);
  }
  
  
