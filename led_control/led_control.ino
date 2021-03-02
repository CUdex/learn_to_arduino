void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(3000);

  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay(2000);

  for(int i = 0; i < 3; i++)
  {
    if (i % 2 == 0)
    {
      digitalWrite(2,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      delay(1000);
      digitalWrite(2,LOW);
      digitalWrite(4,LOW);
      digitalWrite(6,LOW);
    }
    else
    {
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(5,LOW);
    }
    delay(1000);
  }
}
