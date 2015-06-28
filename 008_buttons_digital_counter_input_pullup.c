// Digital counter
// Increment value while pressing button 7
// decrement value while pressing button 8

// INPUT_PULLUP is inside controller for this
// It will be activated only when we specifically enabled it

// what is INPUT_PULLUP?
// Power is always supplied if INPUT_PULLUP is enabled
// POWER will be off when button pressed

// INPUT_PULLUP is meant for knowing problem if any

int i = 0;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  pinMode(7, INPUT_PULLUP); // button for counter increment
  pinMode(8, INPUT_PULLUP); // button for counter decrement
}

void loop() {
  if (digitalRead(7) == 0) {
    if (i < 7) {
      i++;
    } else {
      i = 0;
    }
    counter(i);
    while (digitalRead(7) == 0);
    delay(40);
  }
  
  if (digitalRead(8) == 0) {
    if (i > 0) {
      i--;
    } else {
      i = 7;
    }
    counter(i);
    while (digitalRead(8) == 0);
    delay(40);
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
