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

### Completed Project

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

 