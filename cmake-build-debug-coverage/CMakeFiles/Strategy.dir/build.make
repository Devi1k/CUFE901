# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "E:\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\901辅导\CUFE901

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\901辅导\CUFE901\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/Strategy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Strategy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Strategy.dir/flags.make

CMakeFiles/Strategy.dir/Strategy/4.15.c.obj: CMakeFiles/Strategy.dir/flags.make
CMakeFiles/Strategy.dir/Strategy/4.15.c.obj: ../Strategy/4.15.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\901辅导\CUFE901\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Strategy.dir/Strategy/4.15.c.obj"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Strategy.dir\Strategy\4.15.c.obj -c D:\901辅导\CUFE901\Strategy\4.15.c

CMakeFiles/Strategy.dir/Strategy/4.15.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Strategy.dir/Strategy/4.15.c.i"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\901辅导\CUFE901\Strategy\4.15.c > CMakeFiles\Strategy.dir\Strategy\4.15.c.i

CMakeFiles/Strategy.dir/Strategy/4.15.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Strategy.dir/Strategy/4.15.c.s"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\901辅导\CUFE901\Strategy\4.15.c -o CMakeFiles\Strategy.dir\Strategy\4.15.c.s

# Object files for target Strategy
Strategy_OBJECTS = \
"CMakeFiles/Strategy.dir/Strategy/4.15.c.obj"

# External object files for target Strategy
Strategy_EXTERNAL_OBJECTS =

Strategy.exe: CMakeFiles/Strategy.dir/Strategy/4.15.c.obj
Strategy.exe: CMakeFiles/Strategy.dir/build.make
Strategy.exe: CMakeFiles/Strategy.dir/linklibs.rsp
Strategy.exe: CMakeFiles/Strategy.dir/objects1.rsp
Strategy.exe: CMakeFiles/Strategy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\901辅导\CUFE901\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Strategy.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Strategy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Strategy.dir/build: Strategy.exe

.PHONY : CMakeFiles/Strategy.dir/build

CMakeFiles/Strategy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Strategy.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Strategy.dir/clean

CMakeFiles/Strategy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\901辅导\CUFE901 D:\901辅导\CUFE901 D:\901辅导\CUFE901\cmake-build-debug-coverage D:\901辅导\CUFE901\cmake-build-debug-coverage D:\901辅导\CUFE901\cmake-build-debug-coverage\CMakeFiles\Strategy.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Strategy.dir/depend

