//********************************************
//I2C pwm
//created by Vincent Vandyck on 02/02/2017
//********************************************

#include <iostream>
#include <string>
#include "i2c_pwm.h"
#include <math.h>       /*floor*/
#include <wiringPiI2C.h>
#include <thread>

//*******************************************************************
//Class for pwm through i2c
//*******************************************************************


//------------------Constructor------------------
/** @~english
* @brief initalizes the i2c bus.
*
* Variable address is the device address trying to be accessed, e.g. 0x60
*/

i2c_pwm::i2c_pwm(int address)
{
  mAddress = address;
  mFd = wiringPiI2CSetup(mAddress);
  if (mFd==-1)
  {
    std::cout << "Cannot connect to I2C, Addres = " << std::to_string(mAddress);
    return;
  }

  setAllPWM(0, 0);

  //TODO: add error handling, WriteReg8 returns an int, allows to check if successful or not
  wiringPiI2CWriteReg8(mFd, MODE2, OUTDRV);
  wiringPiI2CWriteReg8(mFd, MODE1, ALLCALL);
    std::this_thread::sleep_for(std::chrono::milliseconds(5));   // wait for oscillator

  //TODO: check if bitwise operations work on int, otherwise change to uint8_t
  mMode1 = wiringPiI2CReadReg8(mFd, MODE1);
  mMode1 = mMode1 & ~SLEEP;                                               // wake up (reset sleep)
  wiringPiI2CWriteReg8(mFd, MODE1, mMode1);
    std::this_thread::sleep_for(std::chrono::milliseconds(5));    // wait for oscillator
}

//------------------Set the PWM frequency------------------
/** @~english
* @brief Write a new PWM frequency to the motorhat
*
*/

void i2c_pwm::setPWMFreq(int freq)
{
      mPrescaleVal = 25000000.0;                                          // 25MHz
      mPrescaleVal /= 4096.0;                                             // 12-bit
      mPrescaleVal /= double(freq);
      mPrescaleVal -= 1.0;
      mPrescale = floor(mPrescaleVal + 0.5);

      mOldMode = wiringPiI2CReadReg8(mFd, MODE1);
      mNewMode = (mOldMode & 0x7F) | 0x10;                                // sleep
      wiringPiI2CWriteReg8(mFd, MODE1, mNewMode);                         // go to sleep
      wiringPiI2CWriteReg8(mFd, PRESCALE, mPrescale);
      // TODO: check if variable mPrescale works here, in example another floor is performed
      // but this looked redundant to me
      wiringPiI2CWriteReg8(mFd, MODE1, mOldMode);
      std::this_thread::sleep_for(std::chrono::milliseconds(5));          // wait for oscillator
      wiringPiI2CWriteReg8(mFd, MODE1, mOldMode | 0x80);
}

//------------------Set the PWM------------------
/** @~english
* @brief Sets a single PWM channel
*
*/

void i2c_pwm::setPWM(int pwmChannel, int on, int off)
{
  wiringPiI2CWriteReg8(mFd, LED0_ON_L+4*pwmChannel, on & 0xFF);
  wiringPiI2CWriteReg8(mFd, LED0_ON_H+4*pwmChannel, on >> 8);
  wiringPiI2CWriteReg8(mFd, LED0_OFF_L+4*pwmChannel, off & 0xFF);
  wiringPiI2CWriteReg8(mFd, LED0_OFF_H+4*pwmChannel, off >> 8);
}

//------------------Set all PWM------------------
/** @~english
* @brief Sets all PWM channels
*
*/

void i2c_pwm::setAllPWM(int on, int off)
{
  wiringPiI2CWriteReg8(mFd, ALL_LED_ON_L, on & 0xFF);
  wiringPiI2CWriteReg8(mFd, ALL_LED_ON_H, on >> 8);
  wiringPiI2CWriteReg8(mFd, ALL_LED_OFF_L, off & 0xFF);
  wiringPiI2CWriteReg8(mFd, ALL_LED_OFF_H, off >> 8);
}
