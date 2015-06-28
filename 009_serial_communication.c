// Program to make LED on and off
// Send A to switch on LED
// Send B to switch off LED 

void setup(){
  Serial.begin(9600);
  Serial.print("Hello ");
  Serial.println("World");
  pinMode(13, OUTPUT);
}

void loop(){
  if (Serial.available() > 0) { // when input buffer is available
    char ctrl = Serial.read();
    if (ctrl == 'A') {
      digitalWrite(13, 1);
      Serial.println("LED ON");
    }
    if (ctrl == 'B') {
      digitalWrite(13, 0);
      Serial.println("LED OFF");
    }
  }
  
}
