/************************************************************/
/*    NAME: Vincent Vandyck                                              */
/*    ORGN: MIT                                             */
/*    FILE: MotorCommand.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef MotorCommand_HEADER
#define MotorCommand_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include "adafruit_motorhat.h"


//TODO: put motorhat code in correct directory and link in cmake
#include "adafruit_motorhat.h"

class MotorCommand : public CMOOSApp
{
 public:
   MotorCommand();
   ~MotorCommand();
   void RegisterVariables();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();

   void CreateMotorHat(int);
   void CreateMotorObj(int);

   double m_speed;
   double m_command;
   int m_I2C;
   int m_num;
   adafruit_motorhat m_mH;
   adafruit_dc_motor m_motor;

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
};

#endif
