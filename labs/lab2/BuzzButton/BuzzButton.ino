
/* Pin Definitions */
// The button is pin A5 and the vibe board is pin 3
int buttonPin = A4;
int vibePin = A3;

void setup()
{
  
  //Button 
  pinMode(buttonPin, INPUT);  // set the pin as an input
  digitalWrite(buttonPin, HIGH);  // enable the pull-up resistor

  //VIBE
  pinMode(vibePin, OUTPUT);  // set the pin as an output

  
}

void loop()
{
  
  //if the button is being pressed
     if(digitalRead(buttonPin) == 0) {
        tone(vibePin, 8000, 1000);
                   
     }

     delay(100);

}


