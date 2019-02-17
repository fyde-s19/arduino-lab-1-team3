void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void timedBlink(int interval) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(interval * 1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
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
