/**
 * @file Constants.h
 * @author Irina Lavryonova (ilavryonova@wpi.edu) - 2019/2020
 * @author Connor Burri (cjburri@wpi.edu) - 2020/2021
 * @author Tom Nurse (tjnurse@wpi.edu) - 2021/2022
 * @brief File containing variables common to the entire system, centralizing the settings of the sailbot
 * @version 2.0.2
 * @date 2022-4-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef Constants_h
#define Constants_h

// necessary libraries for the constants
#include <Arduino.h>

/* Trim servo */
const int SERVO_CTR    = 115;
const int SERVO_LO_LIM = SERVO_CTR-55;
const int SERVO_HI_LIM = SERVO_CTR+55;

/* Wind vein*/
const int POT_HEADWIND = 463;

/* State angles */
const int MAX_LIFT_ANGLE = 30;

/* Pins */
const int potPin = A0;              //A19
const int batteryPin = 17;          //Battery V+
const int servoPin = 16;            //Servo
const int errorLED = 4;             //red
const int bleLED = 3;               //blue
const int powerLED = 5;             //green

#endif
