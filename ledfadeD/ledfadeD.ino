void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq,int duty)
{
  int period, onTime, offTime;
  period = 5000/freq;
  onTime = period * duty/100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN,HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN,LOW);
  delay(offTime);
}

  int x = 100;
  int dir = 0;
  
void loop() {
  // put your main code here, to run repeatedly:

  for(int x=100; x>=0; x--)
  {
    dimmer(500,x);
  }
  for(int y=0; y<=100; y++)
  {
    dimmer(500,y);
  }
}
