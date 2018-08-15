
//1. Blinking Two LED’s using Arduino
//(C) Bassar Patel bassar@aol.in
//https://github.com/PatelBassar/ArduinoDay-2018
int LED1 = 12;
int LED2 = 13;

void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop()
{
  digitalWrite(LED1,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(1000);
  digitalWrite(LED2,LOW);
}