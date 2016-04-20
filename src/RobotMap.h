#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// Arm
const int ARM_MOTOR_PWM = 0;

// Drivetrain
const int FRONT_LEFT_MOTOR_PWM = 1;
const int REAR_LEFT_MOTOR_PWM = 2;
const int FRONT_RIGHT_MOTOR_PWM = 3;
const int REAR_RIGHT_MOTOR_PWM = 4;
const int ANALOG_GYRO = 5;

// Shooter
const int LEFT_FLYWHEEL_PWM = 6;
const int RIGHT_FLYWHEEL_PWM = 7;

// Vision
const int USB_CAMERA = 8;

// Miscellaneous
const int AUTO_MODE_DIGITAL_INPUT = 9;

#endif
