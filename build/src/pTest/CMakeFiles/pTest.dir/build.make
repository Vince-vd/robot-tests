# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vincent/moos-ivp-extend

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vincent/moos-ivp-extend/build

# Include any dependencies generated for this target.
include src/pTest/CMakeFiles/pTest.dir/depend.make

# Include the progress variables for this target.
include src/pTest/CMakeFiles/pTest.dir/progress.make

# Include the compile flags for this target's objects.
include src/pTest/CMakeFiles/pTest.dir/flags.make

src/pTest/CMakeFiles/pTest.dir/Test.cpp.o: src/pTest/CMakeFiles/pTest.dir/flags.make
src/pTest/CMakeFiles/pTest.dir/Test.cpp.o: ../src/pTest/Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vincent/moos-ivp-extend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/pTest/CMakeFiles/pTest.dir/Test.cpp.o"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pTest.dir/Test.cpp.o -c /home/vincent/moos-ivp-extend/src/pTest/Test.cpp

src/pTest/CMakeFiles/pTest.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pTest.dir/Test.cpp.i"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vincent/moos-ivp-extend/src/pTest/Test.cpp > CMakeFiles/pTest.dir/Test.cpp.i

src/pTest/CMakeFiles/pTest.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pTest.dir/Test.cpp.s"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vincent/moos-ivp-extend/src/pTest/Test.cpp -o CMakeFiles/pTest.dir/Test.cpp.s

src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.requires:

.PHONY : src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.requires

src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.provides: src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.requires
	$(MAKE) -f src/pTest/CMakeFiles/pTest.dir/build.make src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.provides.build
.PHONY : src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.provides

src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.provides.build: src/pTest/CMakeFiles/pTest.dir/Test.cpp.o


src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o: src/pTest/CMakeFiles/pTest.dir/flags.make
src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o: ../src/pTest/Test_Info.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vincent/moos-ivp-extend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pTest.dir/Test_Info.cpp.o -c /home/vincent/moos-ivp-extend/src/pTest/Test_Info.cpp

src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pTest.dir/Test_Info.cpp.i"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vincent/moos-ivp-extend/src/pTest/Test_Info.cpp > CMakeFiles/pTest.dir/Test_Info.cpp.i

src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pTest.dir/Test_Info.cpp.s"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vincent/moos-ivp-extend/src/pTest/Test_Info.cpp -o CMakeFiles/pTest.dir/Test_Info.cpp.s

src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.requires:

.PHONY : src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.requires

src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.provides: src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.requires
	$(MAKE) -f src/pTest/CMakeFiles/pTest.dir/build.make src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.provides.build
.PHONY : src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.provides

src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.provides.build: src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o


src/pTest/CMakeFiles/pTest.dir/main.cpp.o: src/pTest/CMakeFiles/pTest.dir/flags.make
src/pTest/CMakeFiles/pTest.dir/main.cpp.o: ../src/pTest/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vincent/moos-ivp-extend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/pTest/CMakeFiles/pTest.dir/main.cpp.o"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pTest.dir/main.cpp.o -c /home/vincent/moos-ivp-extend/src/pTest/main.cpp

src/pTest/CMakeFiles/pTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pTest.dir/main.cpp.i"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vincent/moos-ivp-extend/src/pTest/main.cpp > CMakeFiles/pTest.dir/main.cpp.i

src/pTest/CMakeFiles/pTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pTest.dir/main.cpp.s"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vincent/moos-ivp-extend/src/pTest/main.cpp -o CMakeFiles/pTest.dir/main.cpp.s

src/pTest/CMakeFiles/pTest.dir/main.cpp.o.requires:

.PHONY : src/pTest/CMakeFiles/pTest.dir/main.cpp.o.requires

src/pTest/CMakeFiles/pTest.dir/main.cpp.o.provides: src/pTest/CMakeFiles/pTest.dir/main.cpp.o.requires
	$(MAKE) -f src/pTest/CMakeFiles/pTest.dir/build.make src/pTest/CMakeFiles/pTest.dir/main.cpp.o.provides.build
.PHONY : src/pTest/CMakeFiles/pTest.dir/main.cpp.o.provides

src/pTest/CMakeFiles/pTest.dir/main.cpp.o.provides.build: src/pTest/CMakeFiles/pTest.dir/main.cpp.o


# Object files for target pTest
pTest_OBJECTS = \
"CMakeFiles/pTest.dir/Test.cpp.o" \
"CMakeFiles/pTest.dir/Test_Info.cpp.o" \
"CMakeFiles/pTest.dir/main.cpp.o"

# External object files for target pTest
pTest_EXTERNAL_OBJECTS =

../bin/pTest: src/pTest/CMakeFiles/pTest.dir/Test.cpp.o
../bin/pTest: src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o
../bin/pTest: src/pTest/CMakeFiles/pTest.dir/main.cpp.o
../bin/pTest: src/pTest/CMakeFiles/pTest.dir/build.make
../bin/pTest: /home/vincent/moos-ivp/MOOS/MOOSCore/lib/libMOOS.a
../bin/pTest: src/pTest/CMakeFiles/pTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vincent/moos-ivp-extend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../../bin/pTest"
	cd /home/vincent/moos-ivp-extend/build/src/pTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/pTest/CMakeFiles/pTest.dir/build: ../bin/pTest

.PHONY : src/pTest/CMakeFiles/pTest.dir/build

src/pTest/CMakeFiles/pTest.dir/requires: src/pTest/CMakeFiles/pTest.dir/Test.cpp.o.requires
src/pTest/CMakeFiles/pTest.dir/requires: src/pTest/CMakeFiles/pTest.dir/Test_Info.cpp.o.requires
src/pTest/CMakeFiles/pTest.dir/requires: src/pTest/CMakeFiles/pTest.dir/main.cpp.o.requires

.PHONY : src/pTest/CMakeFiles/pTest.dir/requires

src/pTest/CMakeFiles/pTest.dir/clean:
	cd /home/vincent/moos-ivp-extend/build/src/pTest && $(CMAKE_COMMAND) -P CMakeFiles/pTest.dir/cmake_clean.cmake
.PHONY : src/pTest/CMakeFiles/pTest.dir/clean

src/pTest/CMakeFiles/pTest.dir/depend:
	cd /home/vincent/moos-ivp-extend/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vincent/moos-ivp-extend /home/vincent/moos-ivp-extend/src/pTest /home/vincent/moos-ivp-extend/build /home/vincent/moos-ivp-extend/build/src/pTest /home/vincent/moos-ivp-extend/build/src/pTest/CMakeFiles/pTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/pTest/CMakeFiles/pTest.dir/depend

