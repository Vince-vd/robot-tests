/************************************************************/
/*    NAME: Vincent Vandyck                                              */
/*    ORGN: MIT                                             */
/*    FILE: Test.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef Test_HEADER
#define Test_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class Test : public CMOOSApp
{
 public:
   Test();
   ~Test();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
};

#endif 
