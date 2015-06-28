// Create a digital counter in interactie way
// Sending 1 to 7 via serial communication to switch on LEDs to represent 1 to 7 numbers

int i = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Hello World");
  
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

/*
void loop() {
  if (Serial.available() > 0) {
    char ctrl = Serial.read();
    if (ctrl == '1' || ctrl == '2' || ctrl == '3' || ctrl == '4' || ctrl == '5' || ctrl == '6' || ctrl == '7') {
      counter(ctrl);
      Serial.println('LED ON');
    }
  }
}
*/

void loop() {
  if (Serial.available() > 0) {
    int i = Serial.read() - 48; // 0 code is 48; 1 is 49; 2 is 50.... So that you need not check each val in if condition.
     counter(i);
     Serial.println("LED ON");
  }
}

void counter(int i){
  int a = (i/1) % 2;
  int b = (i/2) % 2;
  int c = (i/4) % 2;
  digitalWrite(11, a);
  digitalWrite(12, b);
  digitalWrite(13, c);
}
