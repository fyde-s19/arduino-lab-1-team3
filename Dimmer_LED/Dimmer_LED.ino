void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

int duty = 0;
int direction = 1;

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000 / freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  dimmer(100, duty);
  duty += direction;
  if(duty == 100){
    direction = -1;  
  }
  if(duty == 0){
    direction = 1;
  }
}
