
void setup(){

}

void loop() {
  // inhaling
  for (int i=0; i < 256; i++){
    analogWrite(3, i);
    delay(5);
  }
  //exhaling
  for (int i = 255; i > 0; i--){
    analogWrite(3, i);
    delay(5);
  }
}
