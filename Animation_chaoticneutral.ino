#include <Adafruit_NeoPixel.h>
#include <PixelStrip.h>
#include <Animation.h>

#include "MyAnimation.h"

const int PIN = 7;
const int NUM_PIXELS = 35;
const int BRIGHTNESS = 12;

PixelStrip *strip = new PixelStrip(NUM_PIXELS, PIN, NEO_GRB);
MyAnimation *animation;

void setup() {
  animation = new MyAnimation();
  strip->setup();
  strip->setAnimation(animation);
}

void loop() {
  strip->draw();
  strip->show();
  delay(10);
}
