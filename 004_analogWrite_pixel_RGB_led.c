// Anlog writes have didicated pins no setup is nessary

void setup(){
  // pins 6,3,5 are dedicated pins for analog output
  //pinMode(3, OUTPUT) is not necessary, since it is a didicated pin for Analog output
  // pin 6 for Red (R)
  // pin 3 for Green (G)
  // pin 5 for Blue (B)
  
  // These three pins put together give input to RGB LED which will form as one pixel
  // this RGB LED color can be changed by changing values for pins 6,3,5
}

void loop(){
  analogWrite(6, 255); // gives red color
  delay(1000);
  analogWrite(6,0);
  analogWrite(3, 255); // gives green color
  delay(1000);
  analogWrite(3,0);
  analogWrite(5, 255); // gives blue color
  delay(1000);
  analogWrite(5,0);
}
