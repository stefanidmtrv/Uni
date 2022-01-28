void setup() {
  // put your setup code here, to run once:
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(18, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(22, HIGH);
  digitalWrite(21, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(18, LOW);
  digitalWrite(5, LOW);
  digitalWrite(22, LOW);
  digitalWrite(21, LOW);
  digitalWrite(32, LOW);
  digitalWrite(33, LOW);
}
