# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/W5.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/W5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/W5.dir/flags.make

CMakeFiles/W5.dir/main.cpp.o: CMakeFiles/W5.dir/flags.make
CMakeFiles/W5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/W5.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W5.dir/main.cpp.o -c "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/main.cpp"

CMakeFiles/W5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W5.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/main.cpp" > CMakeFiles/W5.dir/main.cpp.i

CMakeFiles/W5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W5.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/main.cpp" -o CMakeFiles/W5.dir/main.cpp.s

CMakeFiles/W5.dir/sll.cpp.o: CMakeFiles/W5.dir/flags.make
CMakeFiles/W5.dir/sll.cpp.o: ../sll.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/W5.dir/sll.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/W5.dir/sll.cpp.o -c "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/sll.cpp"

CMakeFiles/W5.dir/sll.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/W5.dir/sll.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/sll.cpp" > CMakeFiles/W5.dir/sll.cpp.i

CMakeFiles/W5.dir/sll.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/W5.dir/sll.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/sll.cpp" -o CMakeFiles/W5.dir/sll.cpp.s

# Object files for target W5
W5_OBJECTS = \
"CMakeFiles/W5.dir/main.cpp.o" \
"CMakeFiles/W5.dir/sll.cpp.o"

# External object files for target W5
W5_EXTERNAL_OBJECTS =

W5: CMakeFiles/W5.dir/main.cpp.o
W5: CMakeFiles/W5.dir/sll.cpp.o
W5: CMakeFiles/W5.dir/build.make
W5: CMakeFiles/W5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable W5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/W5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/W5.dir/build: W5
.PHONY : CMakeFiles/W5.dir/build

CMakeFiles/W5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/W5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/W5.dir/clean

CMakeFiles/W5.dir/depend:
	cd "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5" "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5" "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug" "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug" "/Users/andika/Desktop/Kuliah/Struktur Data/Praktikum/W5/cmake-build-debug/CMakeFiles/W5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/W5.dir/depend

