#define ledPin 5
#define echoPin 6
#define trigPin 7
#define buzzerPin 8



int max = 50;
int min = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);


}

void loop() {
  int olcum = mesafe(max, min);
  melodi(olcum*10);


}

int mesafe(int maxr, int minr)
{
  long duration, distance;

  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2; // ses hızını uzaklğa çevirme
  delay(50);

  if(distance >= maxr || distance <= minr)
  return 0;
  return distance;

}
int melodi(int dly)
{
  tone(buzzerPin, 440);
  digitalWrite(ledPin, HIGH);
  delay(dly);
  noTone(buzzerPin);
  digitalWrite(ledPin, LOW);
  delay(dly);
}
