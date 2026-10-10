// Smart Blind Stick — Arduino Nano
// Author: Sanjay Kumar G (24BEE1256), VIT Chennai

const int trigPin    = 9;
const int echoPin    = 10;
const int buzzerPin  = 7;
const int motorPin   = 6;

void setup() {
  pinMode(trigPin,   OUTPUT);
  pinMode(echoPin,   INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(motorPin,  OUTPUT);
}

long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH, 30000);
  if (duration == 0) return 999;
  return duration / 58;
}

void loop() {
  long dist = getDistance();
  digitalWrite(buzzerPin, dist <= 50 ? HIGH : LOW);
  digitalWrite(motorPin,  dist <= 20 ? HIGH : LOW);
  delay(100);
}
