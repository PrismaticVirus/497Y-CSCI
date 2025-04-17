void setup() {
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  digitalWrite(A9, 1);

  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A3, OUTPUT);
  digitalWrite(A4, 1);

  pinMode(A5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(A8, OUTPUT);


}

void loop() {
  lightSwitch();
  rgbRandomizer();
  lightSensorThingy();
  

}
void lightSwitch(){
  if(digitalRead(A9) == 0){
    digitalWrite(15, 1);
    digitalWrite(16, 1);
    digitalWrite(17, 1);
    digitalWrite(18, 1);
    digitalWrite(19, 1);
    digitalWrite(20, 1);
  } else if (digitalRead(A9) == 1){
    digitalWrite(15, 0);
    digitalWrite(16, 0);
    digitalWrite(17, 0);
    digitalWrite(18, 0);
    digitalWrite(19, 0);
    digitalWrite(20, 0);
  }
}

void rgbRandomizer(){
  if(digitalRead(A4) == 0){
    analogWrite(12, random(255));
    analogWrite(13, random(255));
    analogWrite(14, random(255));
    tone(A3, 440, 500);
    delay(500);

  }
}
void lightSensorThingy(){
  if(analogRead(A2) <= 20){
    digitalWrite(A5, 1);
    digitalWrite(6, 1);
    digitalWrite(A7, 1);
    digitalWrite(A8, 1);
  } else {
    digitalWrite(A5, 0);
    digitalWrite(6, 0);
    digitalWrite(A7, 0);
    digitalWrite(A8, 0);

  }
}
