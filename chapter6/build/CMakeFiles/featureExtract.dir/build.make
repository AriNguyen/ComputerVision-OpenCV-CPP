# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /workspaces/computerVisionCPP/chapter6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/computerVisionCPP/chapter6/build

# Include any dependencies generated for this target.
include CMakeFiles/featureExtract.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/featureExtract.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/featureExtract.dir/flags.make

CMakeFiles/featureExtract.dir/main.cpp.o: CMakeFiles/featureExtract.dir/flags.make
CMakeFiles/featureExtract.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/computerVisionCPP/chapter6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/featureExtract.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureExtract.dir/main.cpp.o -c /workspaces/computerVisionCPP/chapter6/main.cpp

CMakeFiles/featureExtract.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureExtract.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/computerVisionCPP/chapter6/main.cpp > CMakeFiles/featureExtract.dir/main.cpp.i

CMakeFiles/featureExtract.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureExtract.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/computerVisionCPP/chapter6/main.cpp -o CMakeFiles/featureExtract.dir/main.cpp.s

CMakeFiles/featureExtract.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/featureExtract.dir/main.cpp.o.requires

CMakeFiles/featureExtract.dir/main.cpp.o.provides: CMakeFiles/featureExtract.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/featureExtract.dir/build.make CMakeFiles/featureExtract.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/featureExtract.dir/main.cpp.o.provides

CMakeFiles/featureExtract.dir/main.cpp.o.provides.build: CMakeFiles/featureExtract.dir/main.cpp.o


CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o: CMakeFiles/featureExtract.dir/flags.make
CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o: ../utils/MultipleImageWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/computerVisionCPP/chapter6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o -c /workspaces/computerVisionCPP/chapter6/utils/MultipleImageWindow.cpp

CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/computerVisionCPP/chapter6/utils/MultipleImageWindow.cpp > CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.i

CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/computerVisionCPP/chapter6/utils/MultipleImageWindow.cpp -o CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.s

CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.requires:

.PHONY : CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.requires

CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.provides: CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/featureExtract.dir/build.make CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.provides.build
.PHONY : CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.provides

CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.provides.build: CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o


# Object files for target featureExtract
featureExtract_OBJECTS = \
"CMakeFiles/featureExtract.dir/main.cpp.o" \
"CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o"

# External object files for target featureExtract
featureExtract_EXTERNAL_OBJECTS =

featureExtract: CMakeFiles/featureExtract.dir/main.cpp.o
featureExtract: CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o
featureExtract: CMakeFiles/featureExtract.dir/build.make
featureExtract: /usr/local/lib/libopencv_dnn.so.4.4.0
featureExtract: /usr/local/lib/libopencv_gapi.so.4.4.0
featureExtract: /usr/local/lib/libopencv_highgui.so.4.4.0
featureExtract: /usr/local/lib/libopencv_ml.so.4.4.0
featureExtract: /usr/local/lib/libopencv_objdetect.so.4.4.0
featureExtract: /usr/local/lib/libopencv_photo.so.4.4.0
featureExtract: /usr/local/lib/libopencv_stitching.so.4.4.0
featureExtract: /usr/local/lib/libopencv_video.so.4.4.0
featureExtract: /usr/local/lib/libopencv_videoio.so.4.4.0
featureExtract: /usr/local/lib/libopencv_imgcodecs.so.4.4.0
featureExtract: /usr/local/lib/libopencv_calib3d.so.4.4.0
featureExtract: /usr/local/lib/libopencv_features2d.so.4.4.0
featureExtract: /usr/local/lib/libopencv_flann.so.4.4.0
featureExtract: /usr/local/lib/libopencv_imgproc.so.4.4.0
featureExtract: /usr/local/lib/libopencv_core.so.4.4.0
featureExtract: CMakeFiles/featureExtract.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/computerVisionCPP/chapter6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable featureExtract"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/featureExtract.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/featureExtract.dir/build: featureExtract

.PHONY : CMakeFiles/featureExtract.dir/build

CMakeFiles/featureExtract.dir/requires: CMakeFiles/featureExtract.dir/main.cpp.o.requires
CMakeFiles/featureExtract.dir/requires: CMakeFiles/featureExtract.dir/utils/MultipleImageWindow.cpp.o.requires

.PHONY : CMakeFiles/featureExtract.dir/requires

CMakeFiles/featureExtract.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/featureExtract.dir/cmake_clean.cmake
.PHONY : CMakeFiles/featureExtract.dir/clean

CMakeFiles/featureExtract.dir/depend:
	cd /workspaces/computerVisionCPP/chapter6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/computerVisionCPP/chapter6 /workspaces/computerVisionCPP/chapter6 /workspaces/computerVisionCPP/chapter6/build /workspaces/computerVisionCPP/chapter6/build /workspaces/computerVisionCPP/chapter6/build/CMakeFiles/featureExtract.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/featureExtract.dir/depend

