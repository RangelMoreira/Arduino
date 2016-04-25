int luz=13;
void setup() {

  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
 
  char rec;
  rec=Serial.read();
  if(rec=='a')
  {
       digitalWrite(luz,HIGH); 
        
  } 

  if(rec=='d')
  {
    digitalWrite(luz,LOW);  
  }
  Serial.write(rec); 
}
