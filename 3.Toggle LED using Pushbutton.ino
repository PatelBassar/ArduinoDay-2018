
//3.Toggle LED using Pushbutton
//(C) Bassar Patel bassar@aol.in
//https://github.com/PatelBassar/ArduinoDay-2018

int LED=13;
int SW=7;
boolean state = true; //declare variable state as boolean
int val=0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT);
  }
void loop()
{
  val=digitalRead(SW);
  delay(120); // Software debouncing using 120ms delay

if(val==HIGH)

{state=!state; // Compliment variable state using ! operator
  digitalWrite(LED,state);
}
}