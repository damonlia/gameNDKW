# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/lili/Dokumenty/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/lili/Dokumenty/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lili/game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lili/game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/main.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/main.cpp.o -c /home/lili/game/main.cpp

CMakeFiles/game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lili/game/main.cpp > CMakeFiles/game.dir/main.cpp.i

CMakeFiles/game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lili/game/main.cpp -o CMakeFiles/game.dir/main.cpp.s

CMakeFiles/game.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/main.cpp.o.requires

CMakeFiles/game.dir/main.cpp.o.provides: CMakeFiles/game.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/main.cpp.o.provides

CMakeFiles/game.dir/main.cpp.o.provides.build: CMakeFiles/game.dir/main.cpp.o


CMakeFiles/game.dir/Postac.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/Postac.cpp.o: ../Postac.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/Postac.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Postac.cpp.o -c /home/lili/game/Postac.cpp

CMakeFiles/game.dir/Postac.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Postac.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lili/game/Postac.cpp > CMakeFiles/game.dir/Postac.cpp.i

CMakeFiles/game.dir/Postac.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Postac.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lili/game/Postac.cpp -o CMakeFiles/game.dir/Postac.cpp.s

CMakeFiles/game.dir/Postac.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/Postac.cpp.o.requires

CMakeFiles/game.dir/Postac.cpp.o.provides: CMakeFiles/game.dir/Postac.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Postac.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/Postac.cpp.o.provides

CMakeFiles/game.dir/Postac.cpp.o.provides.build: CMakeFiles/game.dir/Postac.cpp.o


CMakeFiles/game.dir/Funkcje.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/Funkcje.cpp.o: ../Funkcje.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/Funkcje.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Funkcje.cpp.o -c /home/lili/game/Funkcje.cpp

CMakeFiles/game.dir/Funkcje.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Funkcje.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lili/game/Funkcje.cpp > CMakeFiles/game.dir/Funkcje.cpp.i

CMakeFiles/game.dir/Funkcje.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Funkcje.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lili/game/Funkcje.cpp -o CMakeFiles/game.dir/Funkcje.cpp.s

CMakeFiles/game.dir/Funkcje.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/Funkcje.cpp.o.requires

CMakeFiles/game.dir/Funkcje.cpp.o.provides: CMakeFiles/game.dir/Funkcje.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Funkcje.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/Funkcje.cpp.o.provides

CMakeFiles/game.dir/Funkcje.cpp.o.provides.build: CMakeFiles/game.dir/Funkcje.cpp.o


CMakeFiles/game.dir/Pocisk.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/Pocisk.cpp.o: ../Pocisk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/game.dir/Pocisk.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Pocisk.cpp.o -c /home/lili/game/Pocisk.cpp

CMakeFiles/game.dir/Pocisk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Pocisk.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lili/game/Pocisk.cpp > CMakeFiles/game.dir/Pocisk.cpp.i

CMakeFiles/game.dir/Pocisk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Pocisk.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lili/game/Pocisk.cpp -o CMakeFiles/game.dir/Pocisk.cpp.s

CMakeFiles/game.dir/Pocisk.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/Pocisk.cpp.o.requires

CMakeFiles/game.dir/Pocisk.cpp.o.provides: CMakeFiles/game.dir/Pocisk.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Pocisk.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/Pocisk.cpp.o.provides

CMakeFiles/game.dir/Pocisk.cpp.o.provides.build: CMakeFiles/game.dir/Pocisk.cpp.o


CMakeFiles/game.dir/Potwor.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/Potwor.cpp.o: ../Potwor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/game.dir/Potwor.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Potwor.cpp.o -c /home/lili/game/Potwor.cpp

CMakeFiles/game.dir/Potwor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Potwor.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lili/game/Potwor.cpp > CMakeFiles/game.dir/Potwor.cpp.i

CMakeFiles/game.dir/Potwor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Potwor.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lili/game/Potwor.cpp -o CMakeFiles/game.dir/Potwor.cpp.s

CMakeFiles/game.dir/Potwor.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/Potwor.cpp.o.requires

CMakeFiles/game.dir/Potwor.cpp.o.provides: CMakeFiles/game.dir/Potwor.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Potwor.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/Potwor.cpp.o.provides

CMakeFiles/game.dir/Potwor.cpp.o.provides.build: CMakeFiles/game.dir/Potwor.cpp.o


CMakeFiles/game.dir/LVL.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/LVL.cpp.o: ../LVL.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/game.dir/LVL.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/LVL.cpp.o -c /home/lili/game/LVL.cpp

CMakeFiles/game.dir/LVL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/LVL.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lili/game/LVL.cpp > CMakeFiles/game.dir/LVL.cpp.i

CMakeFiles/game.dir/LVL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/LVL.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lili/game/LVL.cpp -o CMakeFiles/game.dir/LVL.cpp.s

CMakeFiles/game.dir/LVL.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/LVL.cpp.o.requires

CMakeFiles/game.dir/LVL.cpp.o.provides: CMakeFiles/game.dir/LVL.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/LVL.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/LVL.cpp.o.provides

CMakeFiles/game.dir/LVL.cpp.o.provides.build: CMakeFiles/game.dir/LVL.cpp.o


# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/main.cpp.o" \
"CMakeFiles/game.dir/Postac.cpp.o" \
"CMakeFiles/game.dir/Funkcje.cpp.o" \
"CMakeFiles/game.dir/Pocisk.cpp.o" \
"CMakeFiles/game.dir/Potwor.cpp.o" \
"CMakeFiles/game.dir/LVL.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game: CMakeFiles/game.dir/main.cpp.o
game: CMakeFiles/game.dir/Postac.cpp.o
game: CMakeFiles/game.dir/Funkcje.cpp.o
game: CMakeFiles/game.dir/Pocisk.cpp.o
game: CMakeFiles/game.dir/Potwor.cpp.o
game: CMakeFiles/game.dir/LVL.cpp.o
game: CMakeFiles/game.dir/build.make
game: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lili/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game

.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/requires: CMakeFiles/game.dir/main.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/Postac.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/Funkcje.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/Pocisk.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/Potwor.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/LVL.cpp.o.requires

.PHONY : CMakeFiles/game.dir/requires

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	cd /home/lili/game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lili/game /home/lili/game /home/lili/game/cmake-build-debug /home/lili/game/cmake-build-debug /home/lili/game/cmake-build-debug/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.dir/depend

