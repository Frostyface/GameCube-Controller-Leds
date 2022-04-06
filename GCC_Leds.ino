#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 10

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];
int funkytown[] = {9,8,7,6,5,4,3,2,1,0};

void setup() { 
  
      FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      leds[0] = CRGB(255,0,255);
      FastLED.show();
      leds[1] = CRGB(255,0,255);
      FastLED.show();
      leds[2] = CRGB(255,0,255);
      FastLED.show();
      leds[3] = CRGB(255,0,255);
      FastLED.show();

      for(int i=4; i<=9; i++){
      leds[i] = CRGB(10,0,10);
      FastLED.show();
  }
}

void loop() { 


   for(int i=0; i<=9; i++){
      leds[i] = CRGB(255,0,255);
      FastLED.show();
      delay(120);
      leds[i] = CRGB(0,255,255);
      FastLED.show();
      delay(50);
   }

   
/*
   for(int i=0; i<=9; i++){
      leds[funkytown[i]] = CRGB::Blue;
      FastLED.show();
      delay(50);
   }



*/

  
  // Turn the LED on, then pause

  /*
for(int i=0; i<=9; i++){
      leds[i] = CRGB(102,0,0);
      FastLED.show();
      delay(65);
      if(i == 9){
          leds[i] = CRGB(102,0,0);
          FastLED.show();
          
      }
      else{
        leds[i] = CRGB(255,0,255);
        FastLED.show();
        
      }
      
delay(200);

leds[8] = CRGB(102,0,0);
FastLED.show();
delay(200);
leds[7] = CRGB(102,0,0);
FastLED.show();
delay(200);
leds[6] = CRGB(102,0,0);
FastLED.show();
delay(200);
  */
  






  

  /*
  leds[4] = CRGB::Blue;
  FastLED.show();
  delay(25);
  leds[5] = CRGB::Blue;
  FastLED.show();
  delay(25);
  leds[6] = CRGB::Blue;
  FastLED.show();
  delay(25);
  leds[7] = CRGB::Blue;
  FastLED.show();
  delay(25);
  leds[8] = CRGB::Blue;
  FastLED.show();
  delay(25);
  leds[9] = CRGB(0,255,0);
  FastLED.show();
  delay(25);
  // Now turn the LED off, then pause
  */
}
