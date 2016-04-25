int moistPin=0;
int moistval=0;
void setup() {
  
  Serial.begin(9600);
}

void loop() {
 //lê a humidade do solo
  moistval = analogRead(moistPin);
  
  Serial.print("humidade do solo ");
  Serial.print(moistval);

  if(moistval>300){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }

  if(moistval>200 && moistval<300){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }
  
  Serial.println("");
  delay(1000);
}
