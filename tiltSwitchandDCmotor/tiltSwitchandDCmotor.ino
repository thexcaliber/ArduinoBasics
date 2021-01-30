int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=255;
int tiltPin=2;
int tiltVal;
 
void setup() {
  // put your setup code here, to run once:
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
if (tiltVal==0){
  analogWrite(speedPin,mSpeed);
}
if (tiltVal==1){
  analogWrite(speedPin,0);
}
 
}
