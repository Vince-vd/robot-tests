#--------------------------------------------------------
# The CMakeLists.txt for:                       pTest
# Author(s):                              Vincent Vandyck
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

SET(SRC
  Test.cpp
  Test_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pTest ${SRC})

TARGET_LINK_LIBRARIES(pTest
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

