# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build

# Include any dependencies generated for this target.
include CMakeFiles/grains.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/grains.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/grains.dir/flags.make

CMakeFiles/grains.dir/grains_test.cpp.o: CMakeFiles/grains.dir/flags.make
CMakeFiles/grains.dir/grains_test.cpp.o: ../grains_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/grains.dir/grains_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/grains.dir/grains_test.cpp.o -c /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/grains_test.cpp

CMakeFiles/grains.dir/grains_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grains.dir/grains_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/grains_test.cpp > CMakeFiles/grains.dir/grains_test.cpp.i

CMakeFiles/grains.dir/grains_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grains.dir/grains_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/grains_test.cpp -o CMakeFiles/grains.dir/grains_test.cpp.s

CMakeFiles/grains.dir/grains.cpp.o: CMakeFiles/grains.dir/flags.make
CMakeFiles/grains.dir/grains.cpp.o: ../grains.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/grains.dir/grains.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/grains.dir/grains.cpp.o -c /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/grains.cpp

CMakeFiles/grains.dir/grains.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grains.dir/grains.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/grains.cpp > CMakeFiles/grains.dir/grains.cpp.i

CMakeFiles/grains.dir/grains.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grains.dir/grains.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/grains.cpp -o CMakeFiles/grains.dir/grains.cpp.s

CMakeFiles/grains.dir/test/tests-main.cpp.o: CMakeFiles/grains.dir/flags.make
CMakeFiles/grains.dir/test/tests-main.cpp.o: ../test/tests-main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/grains.dir/test/tests-main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/grains.dir/test/tests-main.cpp.o -c /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/test/tests-main.cpp

CMakeFiles/grains.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grains.dir/test/tests-main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/test/tests-main.cpp > CMakeFiles/grains.dir/test/tests-main.cpp.i

CMakeFiles/grains.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grains.dir/test/tests-main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/test/tests-main.cpp -o CMakeFiles/grains.dir/test/tests-main.cpp.s

# Object files for target grains
grains_OBJECTS = \
"CMakeFiles/grains.dir/grains_test.cpp.o" \
"CMakeFiles/grains.dir/grains.cpp.o" \
"CMakeFiles/grains.dir/test/tests-main.cpp.o"

# External object files for target grains
grains_EXTERNAL_OBJECTS =

grains: CMakeFiles/grains.dir/grains_test.cpp.o
grains: CMakeFiles/grains.dir/grains.cpp.o
grains: CMakeFiles/grains.dir/test/tests-main.cpp.o
grains: CMakeFiles/grains.dir/build.make
grains: CMakeFiles/grains.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable grains"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/grains.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/grains.dir/build: grains

.PHONY : CMakeFiles/grains.dir/build

CMakeFiles/grains.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/grains.dir/cmake_clean.cmake
.PHONY : CMakeFiles/grains.dir/clean

CMakeFiles/grains.dir/depend:
	cd /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build /home/pbraga/Workspace/Pessoal/Repositories/Exercism/exercism/workspace/cpp/grains/build/CMakeFiles/grains.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/grains.dir/depend

