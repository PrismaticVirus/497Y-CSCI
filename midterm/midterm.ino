#include <Adafruit_NeoPixel.h>
#define BUTTON_PIN 6
#define LED_PIN 10  
#define NUM_LEDS 3   
int state = 1;
Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  strip.begin();
  strip.show(); 
  strip.setBrightness(50);
  Serial.begin(9600); 
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    state++;
    if (state > 4) {
      state = 1;
    }
    Serial.println(state);
    delay(1000);

  }

  if (state == 1){
    setAllLeds(255, 0, 255);
  } else if (state == 2){
    setAllLeds(0, 255, 255);
  } else if(state == 3){
    setAllLeds(255,255,255);
  } else if(state == 4){
    strip.setPixelColor(0, strip.Color(255, 0, 255));
    strip.setPixelColor(1, strip.Color(255, 255, 255));
    strip.setPixelColor(2, strip.Color(0, 255, 255));
    strip.show();
  }

    strip.show();
}

void setAllLeds(int red, int green, int blue) {
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(red, green, blue));
    strip.show();
  }
  strip.show();
}
