void setup(){
  
}

void loop() {
  rgb(255, 0, 255); // forms pink color
  delay(1000);
  rgb(0, 255, 255); // forms aqua color
  delay(1000);
  rgb(245, 250, 65); // yellow
  delay(1000);
}

void rgb(int red, int green, int blue){
  analogWrite(6, red);
  analogWrite(3, green);
  analogWrite(5, blue);
}
