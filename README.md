# CSCI 497Y Project Log

This is the log for my midterm and final project for Electronic Textiles
---

## 📓 Project Log #1

Something I liked about the tutorial was how it went over the safety information beforehand.  
Something I didn't really enjoy is that it didn't quite tell you where to locate all of the materials, especially the batting. I had to ask for help to find it.  
If I were to improve the tutorial I would record my own videos in the makerspace instead of using the ones provided by Brother.

I also did the soldering badge, so I thought I would just throw that in here.  
My main problem with the tutorial is that the equipment in the tutorial and what's actually in the kit differ slightly.

![Mug Rug](/images/IMG_2273.png)

---

## 📓 Project Log #2

**Idea:**  
Use the NeoPixels that were supplied and sew them (along with a button) into a backpack. I might buy more for expansion.

**Libraries:**  
This project will use the [Adafruit NeoPixel Library](https://github.com/adafruit/Adafruit_NeoPixel).  
(It’s possible to do it with standard libraries, but I will not be doing that.)

**Timeline:**  
I’ll dedicate about 20 hours to it, allowing plenty of time for troubleshooting and unexpected issues.

**Challenges:**  
- **Thread resistance:** May need to switch to wire or find a way to boost voltage.
- **Backpack material:** Sewing into the backpack could be difficult depending on its composition.
- **Expandability:** I want the final project to allow for easy upgrades later without a full redesign.

---

## 📓 Project Log #3


**Progress:**  
- Successfully prototyped the circuit.
- Code is functioning and cycles through lighting effects.
- Wired up NeoPixels and a button.

**Next Steps:**  
- Sew everything into the backpack.
- Finalize microcontroller placement.
- Implement a "hold to power off" feature for the button.

### Update 
Due to constraints with the conducive thread and the backpack material I decied to crochet a braclet and sew the NeoPixel LEDS into that instead.

---
## 📓 Project Log #4
**Doom Glove**
- My idea is to make a glove that you can play doom (and maybe other games) on

**Parts Required:**
- Glove
- Adafruit Flora
- OLED Screen
- 5x Flex Sensor (or create my own)

**Skills Required**
- Sewing
- Computer Science things (or something idk)

**Similar Projects**

There are a few projects that involve running doom on an arduino, ill probably use the code for the game itself from one of those and modify it so to work in my *unique* form factor

*Will add link later*

**Pros**
* It will be fun 
* Theres alot of room for creative freedom
* The potential to expand the project (more than one game, etc)

**Cons**
* Medium Expensive
* Will take alot of time if I decide to actually make a game from scratch
* Third thing
=======

## 📓 Project Log #5
My Final project will be a face mask with leds that changed based on the sound of your voice 

**Componets**
- Cloth Face Mask (Have)
- Adafruit Flora (Have)
- 4-10 Neopixel LEDS (Have)
- Microphone (Need)
- Light Sensor (Have)

**Things to Figure out**
Will I be able to change the leds based on the amplidute and frequency or just one
Hopefully the light sensor actually works for wear detection

**Diagrams and things**
Here is a simple sketch of the circuit 
![circuit](/images/circuit.png)
Hopefully it will be pretty easy to sew that not that many things need to run across eachother and the pinout on the flora is alot better than on the lilypad

**Rough Code**
```
Calibrate mic 
calibrate light sensor
use light sensor to detect of being worn

Read Mic Value
light up a certain ammount of the leds depeing on the amplitude 
change their colors depending on frequency

```

## 📓 Project Log #6

**Maintaing the code**
- My strategy for backing up the code has all ready been implemented, I will be using this github repo
- Besides from best git practices there isnt much else to do
- If gihtub ever changes their business model I would re evaluate this

## 📓 Project Log #7

**Progress**
As of right now I have sewn in the microcontroller, the microphone, and the light sensor into the board and did some peliminary testing on how they will work toghether

I found out mounting the mic on the ouside works better, which is also better for comfort so I'm really happy with that! 

![Mask](/images/IMG_2479.jpg)
![Mask](/images/IMG_2476.jpg)

**Next Steps**

Now I have to decide on a pattern for the nepoixels and sew them In im thinking circle 

![Mask](/images/IMG_2480.jpg)

I did also discover that I will need to sew an extra layer of fabric into the mask to cover up the thread so it dosent touch your face because it can shock you

## Project Log 8 - Tutorial

### Parts Needed

- Any fabric mask  
- Adafruit Flora (or similar wearable microcontroller)  
- Electret microphone  
- 2–8 NeoPixels (individually addressable LEDs)  
- Light sensor  
- Low-resistance conductive thread  

---

### Step 1: Decide on the Layout

Plan where each component will be placed on the mask. Consider:

- Visibility and aesthetics of the NeoPixels  
- Proximity of the microphone to your mouth  
- Easy routing for conductive thread to minimize crossovers  
- Accessibility of the microcontroller for programming and power  

---

- See Log 6-7 for Images/Ideas (WILL UPDATE IN ACTUAL LOG)

### Step 2: Start Sewing

- **Begin with the Microphone:**  
  It's helpful to secure the most sensitive component first. Position it where it can pick up clear sound but stay protected from wear and tear.

- **Sew NeoPixels with Low-Resistance Conductive Thread:**  
  Using low-resistance thread ensures stable power and data signals across all NeoPixels. Keep connections short and clean to avoid flickering or dimming.

- **Connect the Light Sensor (optional):**  
  If you're using a light sensor for wear detection sew it into the inside of the mask.

---

### Step 3: Test the NeoPixels

Use this code snippet to verify that each NeoPixel lights up and cycles through red, green, blue, and white:

```cpp
//this code was generated by an LLM
#include <Adafruit_NeoPixel.h>

#define PIN        3       // Data pin connected to NeoPixels
#define NUMPIXELS  6       // Adjust this to match your actual pixel count

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// Define a set of test colors
uint32_t colors[] = {
  pixels.Color(255, 0, 0),    // Red
  pixels.Color(0, 255, 0),    // Green
  pixels.Color(0, 0, 255),    // Blue
  pixels.Color(255, 255, 255) // White
};

void setup() {
  pixels.begin();       // Initialize NeoPixel strip
  pixels.show();        // Ensure all pixels start off
}

void loop() {
  for (int offset = 0; offset < 4; offset++) {
    for (int i = 0; i < NUMPIXELS; i++) {
      int colorIndex = (i + offset) % 4;
      pixels.setPixelColor(i, colors[colorIndex]);
    }
    pixels.show();
    delay(500);         // Delay between color shifts
  }
}
```
### Step 4: Writing the Code
-