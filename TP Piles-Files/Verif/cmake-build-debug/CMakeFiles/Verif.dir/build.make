# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Verif.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Verif.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Verif.dir/flags.make

CMakeFiles/Verif.dir/main.c.o: CMakeFiles/Verif.dir/flags.make
CMakeFiles/Verif.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Verif.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Verif.dir/main.c.o   -c "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/main.c"

CMakeFiles/Verif.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Verif.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/main.c" > CMakeFiles/Verif.dir/main.c.i

CMakeFiles/Verif.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Verif.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/main.c" -o CMakeFiles/Verif.dir/main.c.s

CMakeFiles/Verif.dir/main.c.o.requires:

.PHONY : CMakeFiles/Verif.dir/main.c.o.requires

CMakeFiles/Verif.dir/main.c.o.provides: CMakeFiles/Verif.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Verif.dir/build.make CMakeFiles/Verif.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Verif.dir/main.c.o.provides

CMakeFiles/Verif.dir/main.c.o.provides.build: CMakeFiles/Verif.dir/main.c.o


CMakeFiles/Verif.dir/list.c.o: CMakeFiles/Verif.dir/flags.make
CMakeFiles/Verif.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Verif.dir/list.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Verif.dir/list.c.o   -c "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/list.c"

CMakeFiles/Verif.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Verif.dir/list.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/list.c" > CMakeFiles/Verif.dir/list.c.i

CMakeFiles/Verif.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Verif.dir/list.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/list.c" -o CMakeFiles/Verif.dir/list.c.s

CMakeFiles/Verif.dir/list.c.o.requires:

.PHONY : CMakeFiles/Verif.dir/list.c.o.requires

CMakeFiles/Verif.dir/list.c.o.provides: CMakeFiles/Verif.dir/list.c.o.requires
	$(MAKE) -f CMakeFiles/Verif.dir/build.make CMakeFiles/Verif.dir/list.c.o.provides.build
.PHONY : CMakeFiles/Verif.dir/list.c.o.provides

CMakeFiles/Verif.dir/list.c.o.provides.build: CMakeFiles/Verif.dir/list.c.o


CMakeFiles/Verif.dir/stackList.c.o: CMakeFiles/Verif.dir/flags.make
CMakeFiles/Verif.dir/stackList.c.o: ../stackList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Verif.dir/stackList.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Verif.dir/stackList.c.o   -c "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/stackList.c"

CMakeFiles/Verif.dir/stackList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Verif.dir/stackList.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/stackList.c" > CMakeFiles/Verif.dir/stackList.c.i

CMakeFiles/Verif.dir/stackList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Verif.dir/stackList.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/stackList.c" -o CMakeFiles/Verif.dir/stackList.c.s

CMakeFiles/Verif.dir/stackList.c.o.requires:

.PHONY : CMakeFiles/Verif.dir/stackList.c.o.requires

CMakeFiles/Verif.dir/stackList.c.o.provides: CMakeFiles/Verif.dir/stackList.c.o.requires
	$(MAKE) -f CMakeFiles/Verif.dir/build.make CMakeFiles/Verif.dir/stackList.c.o.provides.build
.PHONY : CMakeFiles/Verif.dir/stackList.c.o.provides

CMakeFiles/Verif.dir/stackList.c.o.provides.build: CMakeFiles/Verif.dir/stackList.c.o


CMakeFiles/Verif.dir/queueList.c.o: CMakeFiles/Verif.dir/flags.make
CMakeFiles/Verif.dir/queueList.c.o: ../queueList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Verif.dir/queueList.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Verif.dir/queueList.c.o   -c "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/queueList.c"

CMakeFiles/Verif.dir/queueList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Verif.dir/queueList.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/queueList.c" > CMakeFiles/Verif.dir/queueList.c.i

CMakeFiles/Verif.dir/queueList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Verif.dir/queueList.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/queueList.c" -o CMakeFiles/Verif.dir/queueList.c.s

CMakeFiles/Verif.dir/queueList.c.o.requires:

.PHONY : CMakeFiles/Verif.dir/queueList.c.o.requires

CMakeFiles/Verif.dir/queueList.c.o.provides: CMakeFiles/Verif.dir/queueList.c.o.requires
	$(MAKE) -f CMakeFiles/Verif.dir/build.make CMakeFiles/Verif.dir/queueList.c.o.provides.build
.PHONY : CMakeFiles/Verif.dir/queueList.c.o.provides

CMakeFiles/Verif.dir/queueList.c.o.provides.build: CMakeFiles/Verif.dir/queueList.c.o


# Object files for target Verif
Verif_OBJECTS = \
"CMakeFiles/Verif.dir/main.c.o" \
"CMakeFiles/Verif.dir/list.c.o" \
"CMakeFiles/Verif.dir/stackList.c.o" \
"CMakeFiles/Verif.dir/queueList.c.o"

# External object files for target Verif
Verif_EXTERNAL_OBJECTS =

Verif: CMakeFiles/Verif.dir/main.c.o
Verif: CMakeFiles/Verif.dir/list.c.o
Verif: CMakeFiles/Verif.dir/stackList.c.o
Verif: CMakeFiles/Verif.dir/queueList.c.o
Verif: CMakeFiles/Verif.dir/build.make
Verif: CMakeFiles/Verif.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Verif"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Verif.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Verif.dir/build: Verif

.PHONY : CMakeFiles/Verif.dir/build

CMakeFiles/Verif.dir/requires: CMakeFiles/Verif.dir/main.c.o.requires
CMakeFiles/Verif.dir/requires: CMakeFiles/Verif.dir/list.c.o.requires
CMakeFiles/Verif.dir/requires: CMakeFiles/Verif.dir/stackList.c.o.requires
CMakeFiles/Verif.dir/requires: CMakeFiles/Verif.dir/queueList.c.o.requires

.PHONY : CMakeFiles/Verif.dir/requires

CMakeFiles/Verif.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Verif.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Verif.dir/clean

CMakeFiles/Verif.dir/depend:
	cd "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/Verif/cmake-build-debug/CMakeFiles/Verif.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Verif.dir/depend

