/*
  PicoGamepad

  Turn a Raspberry Pico 2040 into an HID gamepad

  Supports:
  128 Buttons
  8 Analog axes
  4 Hat switches
  
  created 28 June 2021
  by Jake Wilkinson (RealRobots)

  This example code is in the public domain.

  https://www.gitlab.com/realrobots/PicoGamepad
*/


#include <PicoGamepad.h>

PicoGamepad gamepad;



void setup() {  
  // Button on pin 

  pinMode(21, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  
}

void loop() {

 
  gamepad.SetButton(1, !digitalRead(21));
  gamepad.SetButton(2, !digitalRead(20));
  gamepad.SetButton(3, !digitalRead(19));

  gamepad.send_update();

  delay(15);
}
