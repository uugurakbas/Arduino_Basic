#define led1 5
#define led2 6
#define led3 7
#define led4 8
#define led5 9

int deger;
int derece;
int drx;
int dgrx;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  deger = analogRead(A0);
  derece = map(deger, 0,1023,0,180);
  dgrx = analogRead(A1);
  drx = map(dgrx, 0,1023,0,180);
  if(derece >= 0 && derece <85)
  digitalWrite(led1, HIGH);
  else
  digitalWrite(led1, LOW);
  if(derece > 95 && derece <= 180)
  digitalWrite(led2, HIGH);
  else 
  digitalWrite(led2, LOW);
  if(drx >= 0 && drx < 85)
  digitalWrite(led3, HIGH);
  else 
  digitalWrite(led3, LOW);
  if(drx > 95 && drx <= 180)
  digitalWrite(led4, HIGH);
  else 
  digitalWrite(led4, LOW);


}
