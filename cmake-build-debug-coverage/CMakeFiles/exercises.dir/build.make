# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/starry/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/starry/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/starry/Documents/901辅导/CUFE901

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/exercises.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercises.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercises.dir/flags.make

CMakeFiles/exercises.dir/exercises/5.80.c.o: CMakeFiles/exercises.dir/flags.make
CMakeFiles/exercises.dir/exercises/5.80.c.o: ../exercises/5.80.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercises.dir/exercises/5.80.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/exercises.dir/exercises/5.80.c.o -c /Users/starry/Documents/901辅导/CUFE901/exercises/5.80.c

CMakeFiles/exercises.dir/exercises/5.80.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercises.dir/exercises/5.80.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/starry/Documents/901辅导/CUFE901/exercises/5.80.c > CMakeFiles/exercises.dir/exercises/5.80.c.i

CMakeFiles/exercises.dir/exercises/5.80.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercises.dir/exercises/5.80.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/starry/Documents/901辅导/CUFE901/exercises/5.80.c -o CMakeFiles/exercises.dir/exercises/5.80.c.s

# Object files for target exercises
exercises_OBJECTS = \
"CMakeFiles/exercises.dir/exercises/5.80.c.o"

# External object files for target exercises
exercises_EXTERNAL_OBJECTS =

exercises: CMakeFiles/exercises.dir/exercises/5.80.c.o
exercises: CMakeFiles/exercises.dir/build.make
exercises: CMakeFiles/exercises.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercises"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercises.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercises.dir/build: exercises

.PHONY : CMakeFiles/exercises.dir/build

CMakeFiles/exercises.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercises.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercises.dir/clean

CMakeFiles/exercises.dir/depend:
	cd /Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/starry/Documents/901辅导/CUFE901 /Users/starry/Documents/901辅导/CUFE901 /Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage /Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage /Users/starry/Documents/901辅导/CUFE901/cmake-build-debug-coverage/CMakeFiles/exercises.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercises.dir/depend

