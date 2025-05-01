
/* Pin Definitions */
// LEDs: white LEDs are connected to 5, 6, A2, A3, A4
int led5 = 15;
int led6 = 16;
int ledA2 = 17;
int ledA4 = 18;
int ledA3 = 19;
int led20 = 20;

int lightSensorPin = A2;

void setup()
{
  
  //Set up all the leds to out put light
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(ledA2, OUTPUT);
  pinMode(ledA4, OUTPUT);
  pinMode(ledA3, OUTPUT);
  pinMode(led20, OUTPUT);
  
}

void loop()
{
  
    //if it's dark (the light sensor sees less than 20)
    if(analogRead(lightSensorPin) < 20){

      //light up all the leds
       digitalWrite(led5, HIGH);
       delay(250);
       
       digitalWrite(led6, HIGH);
       delay(250);
       
       digitalWrite(ledA2, HIGH);
       delay(250);
       
       digitalWrite(ledA4, HIGH);
       delay(250);
       
       digitalWrite(ledA3, HIGH);
       delay(250);

       digitalWrite(led20, HIGH);
       delay(500);

      // Set rgb led to "white"
       analogWrite(14, 255);
       analogWrite(12, 255);
       analogWrite(13, 255);
      
    }
    //else it's not dark
    else{

      //turn off all the leds
       digitalWrite(led5, LOW);
       digitalWrite(led6, LOW);
       digitalWrite(ledA2, LOW);
       digitalWrite(ledA4, LOW);
       digitalWrite(ledA3, LOW);
       digitalWrite(led20, LOW);
       digitalWrite(14, 0);
      digitalWrite(12, 0);
      digitalWrite(13,0);

    }

    
}








