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


void  dispaly()
{
  //init but not main screeen
  //made to look like linux boot screnn
  //this linux boot screen is based off my hp envy
  Brain.Screen.setPenColor(green);

  Brain.Screen.print("mounting /home");
  wait(1.5,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] mounted /home"); 
  wait(1.5,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] reached target for local filesystems");
  wait(1.5,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] reached target for local filesystems");
  wait(1.5,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("[ok] reached target for local filesystems");
  wait(1.5,seconds);
  Brain.Screen.newLine();
  Brain.Screen.print("");



  //Brain.Screen.clearScreen();
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


Drivetrain.temperature(percent);
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

}



void mainui()
{
  
}

void battery()
{
Brain.Battery.voltage(volt);
Brain.Battery.current(amp);
Brain.Battery.current();
}


void moterinfo()
{
//motor 3// arm motor
//motor 1//left motor 
//motor 2 //right motor
Motor3.position(degrees);
}


void Controller()
{
//call this after main it sequnce with display
Controller1.Screen.print("VEXcode");

}