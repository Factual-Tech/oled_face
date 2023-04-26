#ifndef Oled_face_h
#define Oled_face_h

#include "Arduino.h"

class Oled_face
{
  public:
    Oled_face();
    void begin(void);
    void blink(void);
    void msg(void);
    void error(void);
};

#endif