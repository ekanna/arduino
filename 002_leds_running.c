void setup(){
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  digitalWrite(11, 1);
  delay(1000);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  delay(1000);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  delay(1000);
  digitalWrite(13, 0);
}
