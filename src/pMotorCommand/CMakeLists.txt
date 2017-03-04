#--------------------------------------------------------
# The CMakeLists.txt for:                       pMotorCommand
# Author(s):                              Vincent Vandyck
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

link_directories(/usr/local/lib)

SET(SRC
  MotorCommand.cpp
  MotorCommand_Info.cpp
  i2c_pwm.cpp
  adafruit_motorhat.cpp
  main.cpp
)



ADD_EXECUTABLE(pMotorCommand ${SRC})

TARGET_LINK_LIBRARIES(pMotorCommand
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread
   wiringPi
   rt)
