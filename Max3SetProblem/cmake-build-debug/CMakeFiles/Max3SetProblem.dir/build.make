# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\38066\CLionProjects\Max3SetProblem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Max3SetProblem.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Max3SetProblem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Max3SetProblem.dir/flags.make

CMakeFiles/Max3SetProblem.dir/main.cpp.obj: CMakeFiles/Max3SetProblem.dir/flags.make
CMakeFiles/Max3SetProblem.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Max3SetProblem.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Max3SetProblem.dir\main.cpp.obj -c C:\Users\38066\CLionProjects\Max3SetProblem\main.cpp

CMakeFiles/Max3SetProblem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max3SetProblem.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\38066\CLionProjects\Max3SetProblem\main.cpp > CMakeFiles\Max3SetProblem.dir\main.cpp.i

CMakeFiles/Max3SetProblem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max3SetProblem.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\38066\CLionProjects\Max3SetProblem\main.cpp -o CMakeFiles\Max3SetProblem.dir\main.cpp.s

CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.obj: CMakeFiles/Max3SetProblem.dir/flags.make
CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.obj: ../Source\ Files/CGAIndividual.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Max3SetProblem.dir\Source_Files\CGAIndividual.cpp.obj -c "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CGAIndividual.cpp"

CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CGAIndividual.cpp" > CMakeFiles\Max3SetProblem.dir\Source_Files\CGAIndividual.cpp.i

CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CGAIndividual.cpp" -o CMakeFiles\Max3SetProblem.dir\Source_Files\CGAIndividual.cpp.s

CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.obj: CMakeFiles/Max3SetProblem.dir/flags.make
CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.obj: ../Source\ Files/CGAOptimizer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Max3SetProblem.dir\Source_Files\CGAOptimizer.cpp.obj -c "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CGAOptimizer.cpp"

CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CGAOptimizer.cpp" > CMakeFiles\Max3SetProblem.dir\Source_Files\CGAOptimizer.cpp.i

CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CGAOptimizer.cpp" -o CMakeFiles\Max3SetProblem.dir\Source_Files\CGAOptimizer.cpp.s

CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.obj: CMakeFiles/Max3SetProblem.dir/flags.make
CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.obj: ../Source\ Files/CMax3SatProblem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Max3SetProblem.dir\Source_Files\CMax3SatProblem.cpp.obj -c "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CMax3SatProblem.cpp"

CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CMax3SatProblem.cpp" > CMakeFiles\Max3SetProblem.dir\Source_Files\CMax3SatProblem.cpp.i

CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\38066\CLionProjects\Max3SetProblem\Source Files\CMax3SatProblem.cpp" -o CMakeFiles\Max3SetProblem.dir\Source_Files\CMax3SatProblem.cpp.s

# Object files for target Max3SetProblem
Max3SetProblem_OBJECTS = \
"CMakeFiles/Max3SetProblem.dir/main.cpp.obj" \
"CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.obj" \
"CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.obj" \
"CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.obj"

# External object files for target Max3SetProblem
Max3SetProblem_EXTERNAL_OBJECTS =

Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/main.cpp.obj
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/Source_Files/CGAIndividual.cpp.obj
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/Source_Files/CGAOptimizer.cpp.obj
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/Source_Files/CMax3SatProblem.cpp.obj
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/build.make
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/linklibs.rsp
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/objects1.rsp
Max3SetProblem.exe: CMakeFiles/Max3SetProblem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Max3SetProblem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Max3SetProblem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Max3SetProblem.dir/build: Max3SetProblem.exe
.PHONY : CMakeFiles/Max3SetProblem.dir/build

CMakeFiles/Max3SetProblem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Max3SetProblem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Max3SetProblem.dir/clean

CMakeFiles/Max3SetProblem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\38066\CLionProjects\Max3SetProblem C:\Users\38066\CLionProjects\Max3SetProblem C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug C:\Users\38066\CLionProjects\Max3SetProblem\cmake-build-debug\CMakeFiles\Max3SetProblem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Max3SetProblem.dir/depend

