
//2 Control LED with Push Button
//(C) Bassar Patel bassar@aol.in
const int LED = 13;
const int SW = 7;

 int val=0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(SW, INPUT);
  }

 void loop()
 {
   val=digitalRead(SW);
if(val==HIGH)
{
digitalWrite(LED,HIGH);
}
else
{
  digitalWrite(LED,LOW);
 }
 }