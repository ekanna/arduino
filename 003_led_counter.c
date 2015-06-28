/*
counter indicator using 3 LEDs
0 -> 000
1 -> 001
2 -> 010
3 -> 011
4 -> 100
5 -> 101
6 -> 110
7 -> 111
*/

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 8; i++) 
  {
    int a = (i/1) % 2; // LSB least significant bit
    int b = (i/2) % 2; // middle bit
    int c = (i/4) % 2; // MSB
    
    digitalWrite(11, a);
    digitalWrite(12, b);
    digitalWrite(13, c);
    delay(1000);
  }
}
