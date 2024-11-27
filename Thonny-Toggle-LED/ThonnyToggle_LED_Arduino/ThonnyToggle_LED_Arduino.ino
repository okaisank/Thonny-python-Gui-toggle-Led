//Arduino Sketch

//--------------------------------------
// Aurduino-Python Serial Communication
//--------------------------------------
void setup()
{
  Serial.begin(9600); Serial.setTimeout(1);
  pinMode(13, OUTPUT); pinMode(12, OUTPUT); pinMode(11, OUTPUT);
}
//--------------------------------------------------------------
void loop()
{
  char controlSignal;
  while(!Serial.available());
  
  controlSignal = Serial.read();
  if(controlSignal == 'R') digitalWrite(13, !digitalRead(13));
  if(controlSignal == 'G') digitalWrite(12, !digitalRead(12));
  if(controlSignal == 'B') digitalWrite(11, !digitalRead(11));
}
