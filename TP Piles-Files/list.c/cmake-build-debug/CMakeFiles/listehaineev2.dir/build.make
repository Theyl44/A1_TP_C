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
CMAKE_SOURCE_DIR = "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/listehaineev2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/listehaineev2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/listehaineev2.dir/flags.make

CMakeFiles/listehaineev2.dir/main.c.o: CMakeFiles/listehaineev2.dir/flags.make
CMakeFiles/listehaineev2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/listehaineev2.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/listehaineev2.dir/main.c.o   -c "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/main.c"

CMakeFiles/listehaineev2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/listehaineev2.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/main.c" > CMakeFiles/listehaineev2.dir/main.c.i

CMakeFiles/listehaineev2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/listehaineev2.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/main.c" -o CMakeFiles/listehaineev2.dir/main.c.s

CMakeFiles/listehaineev2.dir/main.c.o.requires:

.PHONY : CMakeFiles/listehaineev2.dir/main.c.o.requires

CMakeFiles/listehaineev2.dir/main.c.o.provides: CMakeFiles/listehaineev2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/listehaineev2.dir/build.make CMakeFiles/listehaineev2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/listehaineev2.dir/main.c.o.provides

CMakeFiles/listehaineev2.dir/main.c.o.provides.build: CMakeFiles/listehaineev2.dir/main.c.o


CMakeFiles/listehaineev2.dir/list.c.o: CMakeFiles/listehaineev2.dir/flags.make
CMakeFiles/listehaineev2.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/listehaineev2.dir/list.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/listehaineev2.dir/list.c.o   -c "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/list.c"

CMakeFiles/listehaineev2.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/listehaineev2.dir/list.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/list.c" > CMakeFiles/listehaineev2.dir/list.c.i

CMakeFiles/listehaineev2.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/listehaineev2.dir/list.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/list.c" -o CMakeFiles/listehaineev2.dir/list.c.s

CMakeFiles/listehaineev2.dir/list.c.o.requires:

.PHONY : CMakeFiles/listehaineev2.dir/list.c.o.requires

CMakeFiles/listehaineev2.dir/list.c.o.provides: CMakeFiles/listehaineev2.dir/list.c.o.requires
	$(MAKE) -f CMakeFiles/listehaineev2.dir/build.make CMakeFiles/listehaineev2.dir/list.c.o.provides.build
.PHONY : CMakeFiles/listehaineev2.dir/list.c.o.provides

CMakeFiles/listehaineev2.dir/list.c.o.provides.build: CMakeFiles/listehaineev2.dir/list.c.o


# Object files for target listehaineev2
listehaineev2_OBJECTS = \
"CMakeFiles/listehaineev2.dir/main.c.o" \
"CMakeFiles/listehaineev2.dir/list.c.o"

# External object files for target listehaineev2
listehaineev2_EXTERNAL_OBJECTS =

listehaineev2: CMakeFiles/listehaineev2.dir/main.c.o
listehaineev2: CMakeFiles/listehaineev2.dir/list.c.o
listehaineev2: CMakeFiles/listehaineev2.dir/build.make
listehaineev2: CMakeFiles/listehaineev2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable listehaineev2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/listehaineev2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/listehaineev2.dir/build: listehaineev2

.PHONY : CMakeFiles/listehaineev2.dir/build

CMakeFiles/listehaineev2.dir/requires: CMakeFiles/listehaineev2.dir/main.c.o.requires
CMakeFiles/listehaineev2.dir/requires: CMakeFiles/listehaineev2.dir/list.c.o.requires

.PHONY : CMakeFiles/listehaineev2.dir/requires

CMakeFiles/listehaineev2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/listehaineev2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/listehaineev2.dir/clean

CMakeFiles/listehaineev2.dir/depend:
	cd "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug" "/mnt/c/Users/Théo/Documents/ISEN/2018-2019/ALGO/TP ALGO/TP Piles-Files/list.c/cmake-build-debug/CMakeFiles/listehaineev2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/listehaineev2.dir/depend

