void setup() {
  Serial.begin(9600);
}

void loop() {
 int sensorValue = analogRead(A0);

 Serial.print("Mosture: ");
 Serial.println(sensorValue);
 
  if( analogRead(sensorValue)>=600 ){
  Serial.print("Status: Air");
  }

  if( analogRead(sensorValue)<599 && analogRead(sensorValue)>=500 ){
  Serial.print("Status: Dry");
  }

  if( analogRead(sensorValue)<499 && analogRead(sensorValue)>=200 ){
  Serial.print("Status: Humid");

  if( analogRead(sensorValue)<199 ){
  Serial.print("Status: Water");
  }
  }

  
 Serial.println("\n ");
 
 delay(500);
}

