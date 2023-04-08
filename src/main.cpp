/*
 * Simple demo
 */
#include "main.h"



void setup() {
  Stepper_init();
  Stepper_run();
  Hi216_init(150);
  Hi216_run(1);
}

void loop() {
  
}