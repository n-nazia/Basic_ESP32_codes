#define led 15


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, 15);
  Serial.println("Led is ON");
  delay(1000);
  analogWrite(led, 0);
  Serial.println("Led is OFF");
  delay(1000);
}
