/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
  
  modified 8 Sep 2016
  by Colby Newman

  modifed 11 Aug 2017
  by Helio R. Freitas Jr.
  
*/
#include <PTconverter.h>



// the setup function runs once when you press reset or power the board
vazio definicao() {
  // initialize digital pin LED_BUILTIN as an output.
  configuraPino(LED_BUILTIN, OUTPUT);
}



// the loop function runs over and over again forever
vazio principal() {
  escrevePino(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  retardo(1000);                       // wait for a second
  escrevePino(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  retardo(1000);                       // wait for a second
}
