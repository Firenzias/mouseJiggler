#include "Mouse.h"

// 59 sec.
const int SLEEP = 56000;
 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);}

void loop() {
  Mouse.begin();
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);
  Mouse.move(5, 0);
  delay(250);
  Mouse.move(0, 5);
  delay(250);
  Mouse.move(-5, 0);
  delay(250);
  Mouse.move(0, -5);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(SLEEP); // wait for a dalay
  Mouse.end();
}
