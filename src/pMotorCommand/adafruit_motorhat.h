#ifndef MOTORHAT_CPP_CONVERSION_ADAFRUIT_MOTORHAT_H
#define MOTORHAT_CPP_CONVERSION_ADAFRUIT_MOTORHAT_H

#include"i2c_pwm.h"

#define     FORWARD     1
#define     BACKWARD    2
#define     BRAKE       3
#define     RELEASE     4

#define     SINGLE      1
#define     DOUBLE      2
#define     INTERLEAVE  3
#define     MICROSTEP   4

#define     NUM_MOTORS  4


class adafruit_motorhat;                                  //forward declaration

/**
* @class adafruit_DCMotor
* @~english
* @brief Control adafruit DC motor
*
*/


class adafruit_dc_motor
{
public:
  adafruit_dc_motor();
  adafruit_dc_motor(adafruit_motorhat * controller, int num);
  void runDC(int command);
  void setSpeed(int speed);

private:
  int mMotorNum;
  int mPwmPin;
  int mIn1Pin;
  int mIn2Pin;
  adafruit_motorhat* MC;

};

/**
* @class adafruit_motorhat
* @~english
* @brief Create instances of class DC motor and initiate requested motor
*
*/

class adafruit_motorhat
{
public:
  adafruit_motorhat(int addr = 0X60, int freq = 1600);
  void setPin(int pin, int value);
  adafruit_dc_motor getMotor(int num);
  i2c_pwm mPwm;
private:
  int mI2CAddr;
  int mFrequency;
  adafruit_dc_motor mMotors[NUM_MOTORS];
protected:
};


#endif
