#include <Stepper.h>

// # steps for full 360-degree rotation, change to fit your motor
int SPR = 2048;

// set a speed for the stepper motor
int rpm = 10;

// initialize stepper library on pins 8 - 11
// pin order IN1, IN3, IN2, IN4
Stepper myStepperA (SPR, 8, 10, 9, 11);
Stepper myStepperB (SPR, 12, 2, 13, 3);
Stepper myStepperC (SPR, 4, 6, 5, 7);

void setup() {
  myStepperA.setSpeed(rpm);
  myStepperB.setSpeed(rpm);
  myStepperC.setSpeed(rpm);
}

void loop() {
  // make a half revolution in one direction
  myStepperA.step(SPR/2);
    myStepperB.step(SPR/2);
    myStepperC.step(SPR/2);
  delay(100);

  // make a half revolution in the opposite direction
  myStepperA.step(-SPR/2);
    myStepperB.step(-SPR/2);
    myStepperC.step(-SPR/2);
  delay(100);
}