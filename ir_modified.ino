#define ir 5
// #define led 18
// #define bz 2
int irValue;
void setup(){
  Serial.begin(115200);
  pinMode(ir, INPUT);
  // pinMode(led, OUTPUT);
  // pinMode(bz, OUTPUT);
}
void loop(){
  irValue=digitalRead(ir);
  Serial.println(irValue);
  delay(500);
  // if (irValue==0){
  //   digitalWrite(led, HIGH);
  //   digitalWrite(bz, HIGH);
  // }
  // else{
  //   digitalWrite(led, LOW);
  //   digitalWrite(bz, LOW);
  // }
}