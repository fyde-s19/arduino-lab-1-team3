void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void timedBlink(int interval) {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval*1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

void LED_Blink() {
  for(int i = 1; i <= 3; i++){
    timedBlink(i);    
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  LED_Blink();
}
