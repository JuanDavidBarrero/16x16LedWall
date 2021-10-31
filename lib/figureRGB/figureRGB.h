#ifndef figureRGB_h
#define figureRGB_h

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define pin_NEO 4

const int brightness = 10;
const int nleds = 256;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(nleds, pin_NEO, NEO_RGB + NEO_KHZ800);

void initNeoPixel();
void showAlien();
void showSpiderman();

#endif