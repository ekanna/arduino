// LED lights ON and OFF 

void setup(){ // setup is a special function like init() which will run only once
  pinMode(11, OUTPUT); // pin 11 used for Output
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){ // loop is a special function like main() but runs in forever loop
  // lights on
  digitalWrite(11, HIGH); // HIGH means on i.e. 1
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  // give some delay otherwise, lights on off you can't notice
  delay(1000);
  digitalWrite(11, LOW); // LOW means off i.e. 0
  digitalWrite(12, 0);
  digitalWrite(13, 0);
  // again introduce delay, otherwise you can't notice off
  delay(1000);
}
