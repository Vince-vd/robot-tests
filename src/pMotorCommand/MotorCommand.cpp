/************************************************************/
/*    NAME: Vincent Vandyck                                 */
/*    ORGN: MIT                                             */
/*    FILE: MotorCommand.cpp                                */
/*    DATE:                                                 */
/************************************************************/

#include <iterator>
#include "MBUtils.h"
#include "MotorCommand.h"

using namespace std;


//---------------------------------------------------------
// Constructor

MotorCommand::MotorCommand()
{
  m_iterations = 0;
  m_timewarp   = 1;
}

//---------------------------------------------------------
// Destructor

MotorCommand::~MotorCommand()
{
}

//---------------------------------------------------------
// Procedure: OnNewMail

bool MotorCommand::OnNewMail(MOOSMSG_LIST &NewMail)
{
  MOOSMSG_LIST::iterator p;

  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;
    string key = msg.GetKey();

    // Handle messages of the type double
    if (msg.IsDouble())
    {
        if (key == "RDR_SPEED")
        {
            m_speed = (int)msg.GetDouble();
            std::cout << "read speed variable: " << m_speed << '\n';
        }
        if (key == "RDR_COMMAND")
        {
            m_command = (int)msg.GetDouble();
            std::cout << "read command variables" << m_command << '\n';\
        }
    }

    // Handle messages of the type string
    if (msg.IsString())
    {
    }

#if 0 // Keep these around just for template
    string key   = msg.GetKey();
    string comm  = msg.GetCommunity();
    double dval  = msg.GetDouble();
    string sval  = msg.GetString();
    string msrc  = msg.GetSource();
    double mtime = msg.GetTime();
    bool   mdbl  = msg.IsDouble();
    bool   mstr  = msg.IsString();
#endif
   }

   return(true);
}

//---------------------------------------------------------
// Procedure: OnConnectToServer

bool MotorCommand::OnConnectToServer()
{
   // register for variables here
   // possibly look at the mission file?
   // m_MissionReader.GetConfigurationParam("Name", <string>);
   // m_Comms.Register("VARNAME", 0);

   RegisterVariables();
   m_mH = adafruit_motorhat(0x60);
   m_motor = m_mH.getMotor(1);
   return(true);
}

//---------------------------------------------------------
// Procedure: Iterate()
//            happens AppTick times per second

bool MotorCommand::Iterate()
{
    // m_mH = adafruit_motorhat(0x60);
    // m_motor = m_mH.getMotor(1);
    m_iterations++;
    std::cout << "setting speed to " << m_speed << '\n';
    m_motor.setSpeed(m_speed);
    std::cout << "setting command to " << m_command << '\n';
    m_motor.runDC(m_command);
    return(true);
}

//---------------------------------------------------------
// Procedure: RegisterVariables

void MotorCommand::RegisterVariables()
{
  Register("RDR_SPEED", 0);
  Register("RDR_COMMAND", 0);
}

//---------------------------------------------------------
// Procedure: OnStartUp()
//            happens before connection is open

bool MotorCommand::OnStartUp()
{
    list<string> sParams;
    m_MissionReader.EnableVerbatimQuoting(false);
    if(m_MissionReader.GetConfiguration(GetAppName(), sParams)) {
        list<string>::iterator p;
        for(p=sParams.begin(); p!=sParams.end(); p++)
        {
            string original_line = *p;
            string param = stripBlankEnds(toupper(biteString(*p, '=')));
            string value = stripBlankEnds(*p);

        }
        // CreateMotorHat(m_I2C);
        // CreateMotorObj(m_num);
    }

    m_timewarp = GetMOOSTimeWarp();
    RegisterVariables();
    return(true);
}


//---------------------------------------------------------
// Procedure: CreateMotorHat

void MotorCommand::CreateMotorHat(int address)
{
    // create a motorhat object with given I2C address
    std::cout << "creating hat, using I2C address " << address << '\n';
    m_mH = adafruit_motorhat(address);
}

//---------------------------------------------------------
// Procedure: CreateMotorObj

void MotorCommand::CreateMotorObj(int motorNum)
{
    //create motor object for given motor number (1-4)
    std::cout << "creating motor object for motor num " << motorNum << '\n';
    m_motor = m_mH.getMotor(motorNum);
}
