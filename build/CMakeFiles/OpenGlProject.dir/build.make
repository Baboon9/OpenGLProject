# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/tim/dev/cpp/OpenGLProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tim/dev/cpp/OpenGLProject/build

# Include any dependencies generated for this target.
include CMakeFiles/OpenGlProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGlProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGlProject.dir/flags.make

CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.o: CMakeFiles/OpenGlProject.dir/flags.make
CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.o: ../src/RenderContext.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/dev/cpp/OpenGLProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.o -c /home/tim/dev/cpp/OpenGLProject/src/RenderContext.cpp

CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/dev/cpp/OpenGLProject/src/RenderContext.cpp > CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.i

CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/dev/cpp/OpenGLProject/src/RenderContext.cpp -o CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.s

CMakeFiles/OpenGlProject.dir/src/Shader.cpp.o: CMakeFiles/OpenGlProject.dir/flags.make
CMakeFiles/OpenGlProject.dir/src/Shader.cpp.o: ../src/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/dev/cpp/OpenGLProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenGlProject.dir/src/Shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGlProject.dir/src/Shader.cpp.o -c /home/tim/dev/cpp/OpenGLProject/src/Shader.cpp

CMakeFiles/OpenGlProject.dir/src/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGlProject.dir/src/Shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/dev/cpp/OpenGLProject/src/Shader.cpp > CMakeFiles/OpenGlProject.dir/src/Shader.cpp.i

CMakeFiles/OpenGlProject.dir/src/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGlProject.dir/src/Shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/dev/cpp/OpenGLProject/src/Shader.cpp -o CMakeFiles/OpenGlProject.dir/src/Shader.cpp.s

CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.o: CMakeFiles/OpenGlProject.dir/flags.make
CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.o: ../src/VertexArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/dev/cpp/OpenGLProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.o -c /home/tim/dev/cpp/OpenGLProject/src/VertexArray.cpp

CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/dev/cpp/OpenGLProject/src/VertexArray.cpp > CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.i

CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/dev/cpp/OpenGLProject/src/VertexArray.cpp -o CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.s

CMakeFiles/OpenGlProject.dir/src/Window.cpp.o: CMakeFiles/OpenGlProject.dir/flags.make
CMakeFiles/OpenGlProject.dir/src/Window.cpp.o: ../src/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/dev/cpp/OpenGLProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGlProject.dir/src/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGlProject.dir/src/Window.cpp.o -c /home/tim/dev/cpp/OpenGLProject/src/Window.cpp

CMakeFiles/OpenGlProject.dir/src/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGlProject.dir/src/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/dev/cpp/OpenGLProject/src/Window.cpp > CMakeFiles/OpenGlProject.dir/src/Window.cpp.i

CMakeFiles/OpenGlProject.dir/src/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGlProject.dir/src/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/dev/cpp/OpenGLProject/src/Window.cpp -o CMakeFiles/OpenGlProject.dir/src/Window.cpp.s

CMakeFiles/OpenGlProject.dir/src/main.cpp.o: CMakeFiles/OpenGlProject.dir/flags.make
CMakeFiles/OpenGlProject.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tim/dev/cpp/OpenGLProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/OpenGlProject.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGlProject.dir/src/main.cpp.o -c /home/tim/dev/cpp/OpenGLProject/src/main.cpp

CMakeFiles/OpenGlProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGlProject.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tim/dev/cpp/OpenGLProject/src/main.cpp > CMakeFiles/OpenGlProject.dir/src/main.cpp.i

CMakeFiles/OpenGlProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGlProject.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tim/dev/cpp/OpenGLProject/src/main.cpp -o CMakeFiles/OpenGlProject.dir/src/main.cpp.s

# Object files for target OpenGlProject
OpenGlProject_OBJECTS = \
"CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.o" \
"CMakeFiles/OpenGlProject.dir/src/Shader.cpp.o" \
"CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.o" \
"CMakeFiles/OpenGlProject.dir/src/Window.cpp.o" \
"CMakeFiles/OpenGlProject.dir/src/main.cpp.o"

# External object files for target OpenGlProject
OpenGlProject_EXTERNAL_OBJECTS =

OpenGlProject: CMakeFiles/OpenGlProject.dir/src/RenderContext.cpp.o
OpenGlProject: CMakeFiles/OpenGlProject.dir/src/Shader.cpp.o
OpenGlProject: CMakeFiles/OpenGlProject.dir/src/VertexArray.cpp.o
OpenGlProject: CMakeFiles/OpenGlProject.dir/src/Window.cpp.o
OpenGlProject: CMakeFiles/OpenGlProject.dir/src/main.cpp.o
OpenGlProject: CMakeFiles/OpenGlProject.dir/build.make
OpenGlProject: /usr/lib/x86_64-linux-gnu/libGL.so
OpenGlProject: libSTB_IMAGE.a
OpenGlProject: libGLAD.a
OpenGlProject: CMakeFiles/OpenGlProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tim/dev/cpp/OpenGLProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable OpenGlProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGlProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGlProject.dir/build: OpenGlProject

.PHONY : CMakeFiles/OpenGlProject.dir/build

CMakeFiles/OpenGlProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGlProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGlProject.dir/clean

CMakeFiles/OpenGlProject.dir/depend:
	cd /home/tim/dev/cpp/OpenGLProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tim/dev/cpp/OpenGLProject /home/tim/dev/cpp/OpenGLProject /home/tim/dev/cpp/OpenGLProject/build /home/tim/dev/cpp/OpenGLProject/build /home/tim/dev/cpp/OpenGLProject/build/CMakeFiles/OpenGlProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGlProject.dir/depend

