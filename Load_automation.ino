int sensor = D1; // Digital pin D7
int state = 0;
int relay = D2;
int relay2 = D3;
int relay3 = D4;
int relay4 = D5;
void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);   // declare sensor as input
  pinMode(relay,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
}
void loop() {
  state = digitalRead(sensor);
  if(state == HIGH) {
   Serial.println("Motion detected!");
   digitalWrite(relay,HIGH);
   delay(0.5);
   digitalWrite(relay2,HIGH);
   delay(0.5);
   digitalWrite(relay3,HIGH);
   delay(0.5);
   digitalWrite(relay4,HIGH);
   
  }
  else {
   Serial.println("Motion absent!");
   
   digitalWrite(relay,LOW);
   delay(0.5);
   digitalWrite(relay2,LOW);
   delay(0.5); 
   digitalWrite(relay3,LOW);
   delay(0.5);
   digitalWrite(relay4,LOW);
  }
}