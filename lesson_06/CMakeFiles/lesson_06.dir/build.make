# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/zhangbinggang/anaconda3/lib/python3.7/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/zhangbinggang/anaconda3/lib/python3.7/site-packages/cmake/data/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06

# Include any dependencies generated for this target.
include CMakeFiles/lesson_06.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lesson_06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lesson_06.dir/flags.make

CMakeFiles/lesson_06.dir/lesson_06.cpp.o: CMakeFiles/lesson_06.dir/flags.make
CMakeFiles/lesson_06.dir/lesson_06.cpp.o: lesson_06.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lesson_06.dir/lesson_06.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lesson_06.dir/lesson_06.cpp.o -c /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/lesson_06.cpp

CMakeFiles/lesson_06.dir/lesson_06.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lesson_06.dir/lesson_06.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/lesson_06.cpp > CMakeFiles/lesson_06.dir/lesson_06.cpp.i

CMakeFiles/lesson_06.dir/lesson_06.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lesson_06.dir/lesson_06.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/lesson_06.cpp -o CMakeFiles/lesson_06.dir/lesson_06.cpp.s

CMakeFiles/lesson_06.dir/tool.cpp.o: CMakeFiles/lesson_06.dir/flags.make
CMakeFiles/lesson_06.dir/tool.cpp.o: tool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lesson_06.dir/tool.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lesson_06.dir/tool.cpp.o -c /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/tool.cpp

CMakeFiles/lesson_06.dir/tool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lesson_06.dir/tool.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/tool.cpp > CMakeFiles/lesson_06.dir/tool.cpp.i

CMakeFiles/lesson_06.dir/tool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lesson_06.dir/tool.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/tool.cpp -o CMakeFiles/lesson_06.dir/tool.cpp.s

# Object files for target lesson_06
lesson_06_OBJECTS = \
"CMakeFiles/lesson_06.dir/lesson_06.cpp.o" \
"CMakeFiles/lesson_06.dir/tool.cpp.o"

# External object files for target lesson_06
lesson_06_EXTERNAL_OBJECTS =

lesson_06: CMakeFiles/lesson_06.dir/lesson_06.cpp.o
lesson_06: CMakeFiles/lesson_06.dir/tool.cpp.o
lesson_06: CMakeFiles/lesson_06.dir/build.make
lesson_06: /home/zhangbinggang/3rdparty/OpenCV3/lib/libopencv_world.so
lesson_06: CMakeFiles/lesson_06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lesson_06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lesson_06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lesson_06.dir/build: lesson_06

.PHONY : CMakeFiles/lesson_06.dir/build

CMakeFiles/lesson_06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lesson_06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lesson_06.dir/clean

CMakeFiles/lesson_06.dir/depend:
	cd /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06 /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06 /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06 /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06 /home/zhangbinggang/workspace/personal_github/HappyLearningML/LearningOpenCV4/lesson_06/CMakeFiles/lesson_06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lesson_06.dir/depend

