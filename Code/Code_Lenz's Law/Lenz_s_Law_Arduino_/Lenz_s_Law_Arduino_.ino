#define pin A7
#define pin2 10
 
void setup() {
  Serial.begin(230400); 
  //Serial.begin(115200); 
  pinMode(pin,INPUT);
  pinMode(pin2,INPUT);
  pinMode(2,INPUT);
}
 
void loop() {
  while(true){
  while(true){
  if(digitalRead(pin2)==HIGH)
    break;
  }
  while(digitalRead(2)==LOW)
  {
  Serial.println(analogRead(pin));
  }
  Serial.println("-1");
}}
