/*

  MOUSE JIGGLER FOR Arduino Digispark v3:

  digispark
  created 2022
  by Firenzias

  To install Digispark board and drivers: https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/

  Original code from which this one is derived: 
  
  1. Blink without Delay
    created 2005
    by David A. Mellis
    modified 8 Feb 2010
    by Paul Stoffregen
    modified 11 Nov 2013
    by Scott Fitzgerald
    modified 9 Jan 2017
    by Arturo Guadalupi
    This example code is in the public domain.
    https://www.arduino.cc/en/Tutorial/BuiltInExamples/BlinkWithoutDelay

  2. KeyboardAndMouseControl  
    Tom Igoe
    https://www.arduino.cc/en/Tutorial/BuiltInExamples/KeyboardAndMouseControl

  3. mouseJiggglerArduino
    created 2022
    by Firenzias

*/

#include <DigiMouse.h>

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;  // will store last time LED was updated


// secs total no matter how log the script last
const long interval = 5000;
const int pixelsMove = 1;
const int LED_BUILTIN = 1;

 
void setup() {
  // set the digital pin as output:
  DigiMouse.begin();
  // pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

  // actual script

  // delay(1000);
  // digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  DigiMouse.delay(1000);
  DigiMouse.moveX(pixelsMove);
  DigiMouse.delay(250);
  // Mouse.move(0, pixelsMove);
  // delay(250);
  DigiMouse.moveX(-pixelsMove);
  DigiMouse.delay(250);
  // Mouse.move(0, -pixelsMove);
  // delay(250);
  // digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  }
}
