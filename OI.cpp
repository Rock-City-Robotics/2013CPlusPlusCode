// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DriveWithJoysticks.h"
#include "Commands/FireDisc.h"
#include "Commands/StartIndexer.h"
#include "Commands/StartShooter.h"
#include "Commands/StopShooter.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	joystick2 = new Joystick(3);
	
	shooterStopButton = new JoystickButton(joystick2, 9);
	shooterStopButton->WhenPressed(new StopShooter());
	shooterStartButton = new JoystickButton(joystick2, 8);
	shooterStartButton->WhenPressed(new StartShooter());
	fireButton = new JoystickButton(joystick2, 1);
	fireButton->WhenPressed(new FireDisc());
	indexerButton = new JoystickButton(joystick2, 2);
	indexerButton->WhenPressed(new StartIndexer());
	joystick1 = new Joystick(1);
	
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("StartIndexer", new StartIndexer());
	SmartDashboard::PutData("FireDisc", new FireDisc());
	SmartDashboard::PutData("StartShooter", new StartShooter());
	SmartDashboard::PutData("StopShooter", new StopShooter());
	SmartDashboard::PutData("DriveWithJoysticks", new DriveWithJoysticks());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getJoystick2() {
	return joystick2;
}
Joystick* OI::getJoystick1() {
	return joystick1;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
