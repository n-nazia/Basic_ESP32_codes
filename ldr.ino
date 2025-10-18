#define led 2
#define ldr 4
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
  int ldr_re;
  ldr_re = analogRead(ldr);
  if(ldr_re > 1000) {
    digitalWrite(led, HIGH);
    delay(1000);
    Serial.println(ldr_re);
    delay(1000);
 }
  else {
  digitalWrite(led, LOW);
    delay(1000);
    Serial.println(ldr_re);
  }
}
