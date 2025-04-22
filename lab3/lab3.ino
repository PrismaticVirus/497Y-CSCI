int sensorMin = 1023;
int sensorMax = 0;

int calTime = 6000;
int sensorPin = A9;

void setup() {
  Serial.begin(9600);
  Serial.println("Calibrating...");
  pinMode(A3, OUTPUT);
  pinMode(12, OUTPUT);
  calibrate();
}
void calibrate() {
  tone(A3, 440, 200);

  while (calTime > millis()) {
    int reading = analogRead(sensorPin);

    if (reading > sensorMax) {
      sensorMax = reading;
    }
    delay(20);
    if (reading < sensorMin) {
      sensorMin = reading;
    }


    delay(5);
  }

  tone(A3, 440, 200);
  delay(200);
  tone(A3, 440, 200);
}

void loop() {
  int sensorOutput = analogRead(A9);

  sensorOutput = constrain(sensorOutput, sensorMin, sensorMax);
  int force = map(sensorOutput, sensorMin, sensorMax, 0, 100);

  Serial.println(force);

  

  if (force >= 50) {
    digitalWrite(12, HIGH);
  }
}
