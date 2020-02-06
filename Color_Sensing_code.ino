int ldrpin=A0;
void setup() {
  Serial.begin(9600);  //So that we can view the result on the Serial monitor
  pinMode(LED_BUILTIN, OUTPUT); 
  pinMode(13,OUTPUT);
  pinMode(ldrpin,INPUT);// Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(LED_BUILTIN, LOW);   
   
  int ans = analogRead(ldrpin);
  //Serial.println(ans);
  if(ans <330)
  Serial.println("Dark");
  else if(ans>=330 && ans <460)
  Serial.println("Red Light");
  else if(ans>=460 and ans<620)
  Serial.println("Green light");
  else if(ans>=620 and ans <=800)
  Serial.println("Blue light");   
  else{
  Serial.println("White");   }
  delay(1000);    
}
