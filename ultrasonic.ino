//Measuring distance in cm using ultrasonic sensor HCSR04

#define trig 26
#define echo 18
#define led1 2
#define led2 4

void setup() {
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  int duration = pulseIn(echo,HIGH);

  float distance = 0.0343*duration/2;
  Serial.print("Distance = ");
  Serial.println(distance);
  delay(10);
  if(distance>30) {
    digitalWrite(led1, HIGH);

    digitalWrite(led1, LOW);
    delay(1000);
  }
  else {
    digitalWrite(led2,HIGH);

    digitalWrite(led2, LOW);
    delay(1000);
  }
}



