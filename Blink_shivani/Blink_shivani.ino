
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, 1);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 1); 
  delay(1000);                       
  digitalWrite(13, 0);   
  delay(1000); 
  digitalWrite(13, 1);   
  delay(500);
  digitalWrite(13, 0);   
  delay(500);        
}
