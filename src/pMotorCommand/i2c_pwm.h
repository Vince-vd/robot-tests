//
// Created by vincent on 02.02.17.
//

#ifndef MOTORHAT_CPP_CONVERSION_I2C_PWM_H
#define MOTORHAT_CPP_CONVERSION_I2C_PWM_H

#include <wiringPi.h>
#include <string>
using std::string;

#define    	MODE1		       0x00
#define    	MODE2              0x01
#define    	SUBADR1            0x02
#define    	SUBADR2            0x03
#define    	SUBADR3            0x04
#define    	PRESCALE           0xFE
#define    	LED0_ON_L          0x06
#define    	LED0_OFF_L         0x08
#define    	LED0_ON_H          0x07
#define    	LED0_OFF_H         0x09
#define    	ALL_LED_ON_L       0xFA
#define    	ALL_LED_ON_H       0xFB
#define    	ALL_LED_OFF_L      0xFC
#define    	ALL_LED_OFF_H      0xFD

//  # Bits
#define    	RESTART            0x80
#define    	SLEEP              0x10
#define    	ALLCALL            0x01
#define    	INVRT              0x10
#define    	OUTDRV             0x04

/**
* @class PWM
* @~english
* @brief Adafruit PCA9685 16-Channel PWM Servo Driver
*
*/
class i2c_pwm
{
public:
		i2c_pwm(int address = 0x60);
		void setPWMFreq(int freq);
		void setPWM(int pwmChannel, int on, int off);
		void setAllPWM(int on, int off);

private:
	int mAddress;
	int mBus;
	int mFd;
	int mMode1;
	int mPrescale;
	int mOldMode;
	int mNewMode;
	double mPrescaleVal;

	// int write8(int fd, int reg, int data);             //Using wiringPi native functions instead of writing my own. keeping declarations in case natvie doesn't work
	// int read8(int fd, int reg);
	int log (string msg);
};


#endif

//MOTORHAT_CPP_CONVERSION_I2C_PWM_H
