//********************************************
//Adafruit motorhat
//created by Vincent Vandyck on 02/06/2017
//********************************************

#include <iostream>
#include "adafruit_motorhat.h"

//*******************************************************************
//Adafruit DCMotor class, controls DC motor
//*******************************************************************

//------------------Default constructor------------------
/** @~english
* @brief TODO: write brief.
*
*/

adafruit_dc_motor::adafruit_dc_motor()
{
  mMotorNum = -1;
  MC = NULL;
}

//------------------Constructor------------------
/** @~english
* @brief TODO: write brief.
*
*/

adafruit_dc_motor::adafruit_dc_motor(adafruit_motorhat * controller, int num) {
  mMotorNum = num;
  mPwmPin = mIn1Pin = mIn2Pin = 0;
  MC = controller;

  switch (num) {
    case 0:
      mPwmPin = 8;
          mIn1Pin = 9;
          mIn2Pin = 10;
          break;

    case 1:
      mPwmPin = 13;
          mIn1Pin = 12;
          mIn2Pin = 11;
          break;

    case 2:
      mPwmPin = 2;
          mIn1Pin = 3;
          mIn2Pin = 4;
          break;

    case 3:
      mPwmPin = 7;
          mIn1Pin = 6;
          mIn2Pin = 5;
          break;

    default:
      std::cout << "MotorHAT motor must be between 1 and 4 inclusive" << '\n';
  }
}

  //------------------Run------------------
  /** @~english
  * @brief Start motor forward, backward or stop
  *
  */

  void adafruit_dc_motor::runDC(int command)
  {
    if (MC != NULL)
    {
      switch (command)
      {
        case FORWARD:
        MC->setPin(mIn2Pin, 0);
        MC->setPin(mIn2Pin, 1);
        break;

        case BACKWARD:
        MC->setPin(mIn1Pin, 0);
        MC->setPin(mIn2Pin, 1);
        break;

        case RELEASE:
        MC->setPin(mIn1Pin, 0);
        MC->setPin(mIn2Pin, 0);
        break;
      }
      std::cout << "run DC called with command = " << command << '\n';
    }
    else
    {
      return;
    }
  }

  //------------------setSpeed------------------
  /** @~english
  * @brief Set motor speed using PMW
  *
  */

  void adafruit_dc_motor::setSpeed(int speed)
  {
      std::cout << "set speed called from motorhat with speed = " << speed << '\n';
    if (speed < 0) {speed = 0;}
    if (speed > 255) {speed = 255;}
    MC->mPwm.setPWM(mPwmPin, 0, speed*16);

  }


//*******************************************************************
//Adafruit Motorhat class
//*******************************************************************


//------------------Constructor------------------
/** @~english
* @brief TODO: write brief.
*
*/

adafruit_motorhat::adafruit_motorhat(int addr, int freq)
{
    std::cout << "this is a message from the motorhat" << '\n';
  mI2CAddr = addr;                                        // default address on HAT
  mFrequency = freq;                                      // default @1600Hz PWM freq
  mPwm = i2c_pwm(mI2CAddr);                               // create instance of i2c_pwm to control motor
  mPwm.setPWMFreq(mFrequency);
  for (size_t i = 0; i < NUM_MOTORS;   i++) {               // initialize all motors
    mMotors[i] = adafruit_dc_motor(this, i);
  }

}

//------------------setPin------------------
/** @~english
* @brief Set PWM channel.
*
*/
void adafruit_motorhat::setPin(int pin, int value)
{
  if (pin < 0 || pin > 15)
  {
    std::cout << "PWM pint must be between 0 and 15 inclusive" << '\n';
  }
  if (value != 0 && value !=1)
  {
    std::cout << "Pin value must be 0 or 1!" << '\n';
  }
  if (value == 0)
  {
    mPwm.setPWM(pin, 0, 4096);
  }
  if (value == 1)
  {
    mPwm.setPWM(pin, 4096, 0);
  }
}

adafruit_dc_motor adafruit_motorhat::getMotor(int num)
{
  if (num <1 || num > 4)
  {
    std::cout << "MotorHAT motor must be between 1 and 4 inclusive!" << '\n';
  }
  return mMotors[num-1];
}
