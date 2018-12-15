#ifndef MyAnimation_h
#define MyAnimation_h
#include <Animation.h>

/**

*/
class MyAnimation : public Animation {
  public:
    void reset(Adafruit_NeoPixel *strip);
    void draw(Adafruit_NeoPixel *strip);
    unsigned long waitTime = 0;
    unsigned long color = 0x008800;
  private:
};
#endif
