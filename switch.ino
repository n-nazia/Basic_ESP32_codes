#define led 2
#define sw1 4

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(sw1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw1_status;
  sw1_status = digitalRead(sw1);
  if (sw1_status==LOW) {
    digitalWrite(led, HIGH);
  }
    else {
      digitalWrite(led, LOW);
    }
}

