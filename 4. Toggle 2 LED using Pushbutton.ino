
//4. Toggle 2 LED using Pushbutton
//(C) Bassar Patel bassar@aol.in

int LED1=13;
int LED2=12;
int SW=7;
boolean state = true; // declare variable state as boolean
int val=0;

void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(SW,INPUT);
 }
void loop()
{
  val=digitalRead(SW);
  delay(100); // Software debouncing

if(val==HIGH)

{state=!state; // Complimenting the status of LED
  digitalWrite(LED1,state);
  digitalWrite(LED2,!state);
}
}