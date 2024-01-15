#include <FastLED.h>
#define NUM_LEDS 2
CRGB leds[NUM_LEDS];
void setup() { FastLED.addLeds<WS2812B, 19>(leds, NUM_LEDS); }
void loop() {
  for (int i = 121; i > -1; i--)
  {
    leds[0] = CRGB(i, 0, 204);
    FastLED.show(); 
    leds[1] = CRGB(i, 0, 204);
    FastLED.show();
    delay(100);
  }
  for (int i = 0; i < 103; i++)
  {
    leds[0] = CRGB(0, i, 204);
    FastLED.show(); 
    leds[1] = CRGB(0, i, 204);
    FastLED.show();
    delay(100);
  }
  int g = 103;
  for (int i = 0; i < 122; i++)
  {
    
    if (g  > 0)
    {
      g--;
    }
    else
    {
      g = 0;
    }
    leds[0] = CRGB(i, g, 204);
    FastLED.show(); 
    leds[1] = CRGB(i, g, 204);
    FastLED.show();
    delay(100);
  }

}
