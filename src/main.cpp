/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Clawbot Template (Individual Motors)                      */
/*                                                                            */
/*    Name:                                                                   */
/*    Date:                                                                   */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LeftMotor            motor         1               
// RightMotor           motor         10              
// ClawMotor            motor         3               
// ArmMotor             motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

// Include the V5 Library
#include "vex.h"
  
// Allows for easier use of the VEX Library
using namespace vex;


/ Include the V5 Library
#include "vex.h"
  
// Allows for easier use of the VEX Library
using namespace vex;
#pragma region VEXcode Generated Robot Configuration
// Make sure all required headers are included.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


#include "vex.h"

using namespace vex;

// Brain should be defined by default
brain Brain;


// START V5 MACROS
#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)
// END V5 MACROS


// Robot configuration code.
controller Controller1 = controller(primary);
motor Motor3 = motor(PORT3, ratio18_1, false);

motor LeftDriveSmart = motor(PORT1, ratio18_1, false);
motor RightDriveSmart = motor(PORT2, ratio18_1, true);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 40, mm, 1);

motor claw = motor(PORT8, ratio18_1, false);

motor arm = motor(PORT4, ratio18_1, false);



// generating and setting random seed
void initializeRandomSeed(){
  int systemTime = Brain.Timer.systemHighResolution();
  double batteryCurrent = Brain.Battery.current();
  double batteryVoltage = Brain.Battery.voltage(voltageUnits::mV);

  // Combine these values into a single integer
  int seed = int(batteryVoltage + batteryCurrent * 100) + systemTime;

  // Set the seed
  srand(seed);
}



void vexcodeInit() {

  //Initializing random seed.
  initializeRandomSeed(); 
}


// Helper to make playing sounds from the V5 in VEXcode easier and
// keeps the code cleaner by making it clear what is happening.
void playVexcodeSound(const char *soundName) {
  printf("VEXPlaySound:%s\n", soundName);
  wait(5, msec);
}



// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

#pragma endregion VEXcode Generated Robot Configuration

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       {author}                                                  */
/*    Created:      {date}                                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// Include the V5 Library
#include "vex.h"
  
// Allows for easier use of the VEX Library
using namespace vex;

void  dispaly()
{
  //init but not main screeen
  //made to look like linux boot screnn
  //this linux boot screen is based off my hp envy
  Brain.Screen.setPenColor(green);
  //brain is 10 charcters long
  Brain.Screen.print("mounting /home");
  wait(1,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] mounted /home"); 
  wait(1,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] reached target for local filesystems");
  wait(1,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] reached target for local filesystems");
  wait(1,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] reached target for local filesystems");
  wait(1,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("d");
  wait(1,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("d");
  Brain.Screen.newLine();
  wait(1,seconds);
  Brain.Screen.print("d");
  Brain.Screen.newLine();
  wait(1,seconds);
  Brain.Screen.print("d");
  Brain.Screen.newLine();
  wait(1,seconds);
  Brain.Screen.print("d");
  Brain.Screen.newLine();
  wait(1,seconds);
  Brain.Screen.print("d");
  Brain.Screen.newLine();
  wait(1,seconds);
  Brain.Screen.print("d");
  Brain.Screen.newLine();
  wait(1,seconds);
  
 Brain.Screen.clearScreen();
  Brain.Screen.print("VEXcode");

  //Brain.Screen.clearScreen();
  Brain.Screen.print("VEXcode");

}

void battery1()
{
Brain.Battery.voltage(volt);
Brain.Battery.current(amp);
Brain.Battery.current();
}

void movmenent()
{
Drivetrain.driveFor(forward, 200, mm);
Drivetrain.turnFor(right, 90, degrees);
Drivetrain.driveFor(forward, 200, mm);
Drivetrain.turnFor(right, 90, degrees);
Drivetrain.driveFor(forward, 200, mm);
Drivetrain.turnFor(right, 90, degrees);
Drivetrain.driveFor(forward, 200, mm);
Motor3.spinFor(forward, 180, degrees);
claw.spinFor(forward, 180, degrees);



Drivetrain.temperature(percent);
}

void armmotor()
{
  
}

void Controllerinfo()
{
//DISPLAUS INFO ON THE CONTROLLER SCREEN
Controller1.Screen.print("kai weavers program");
Controller1.Screen.newLine();
//what buttons pushing
Controller1.Screen.print("button pushed");

//copy right info lol
Controller1.Screen.print("©kai weaver 2025");

}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  printf("project started");
  // Begin project code
  //calling stuff
  dispaly();
  //want to wait for intial boot u
  movmenent();
  Controllerinfo();

}



void mainui()
{
  
}

void battery()
{
Brain.Battery.voltage(volt);
Brain.Battery.current(amp);
Brain.Battery.capacity();
}


void moterinfo()
{
//motor 3// arm motor
//motor 1//left motor 
//motor 2 //right motor
Motor3.position(degrees);
//Drivetrain
}




