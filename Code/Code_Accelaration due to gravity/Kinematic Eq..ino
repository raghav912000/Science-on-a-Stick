#define pin1 10
#define pin2 5
#define pin3 2
long int timet[3];
void setup() 
{
Serial.begin(9600);
pinMode(pin1,INPUT);
pinMode(pin2,INPUT);
pinMode(pin3,INPUT);
}

void loop()
{
while (true)
{
  if(digitalRead(pin1)==HIGH)
  {
    Serial.println(1);
    timet[0]=millis();
    break;
  }
}
while (true)
{
  if(digitalRead(pin2)==HIGH)
  {
    Serial.println(2);
    timet[1]=millis();
    break;
  }
}
while (true)
{
  if(digitalRead(pin3)==HIGH)
  {
    Serial.println(3);
    timet[2]=millis();
    break;
  }
}
Serial.println("Observed Time :");
Serial.println("Time taken between first and second Switch : ");
Serial.println(timet[1]-timet[0]);
Serial.println("Time taken between first and third Switch : ");
Serial.println(timet[2]-timet[0]);/*
Serial.println("Calculated Time :");
Serial.println("Time taken between first and second Switch : ");
Serial.println(235);
Serial.println("Time taken between first and third Switch : ");
Serial.println(424);*/
}
