# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tengizibrayev/sim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tengizibrayev/sim/build

# Include any dependencies generated for this target.
include CMakeFiles/sim.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sim.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sim.dir/flags.make

CMakeFiles/sim.dir/sim.cc.o: CMakeFiles/sim.dir/flags.make
CMakeFiles/sim.dir/sim.cc.o: /Users/tengizibrayev/sim/sim.cc
CMakeFiles/sim.dir/sim.cc.o: CMakeFiles/sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sim.dir/sim.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sim.dir/sim.cc.o -MF CMakeFiles/sim.dir/sim.cc.o.d -o CMakeFiles/sim.dir/sim.cc.o -c /Users/tengizibrayev/sim/sim.cc

CMakeFiles/sim.dir/sim.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sim.dir/sim.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/sim.cc > CMakeFiles/sim.dir/sim.cc.i

CMakeFiles/sim.dir/sim.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sim.dir/sim.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/sim.cc -o CMakeFiles/sim.dir/sim.cc.s

# Object files for target sim
sim_OBJECTS = \
"CMakeFiles/sim.dir/sim.cc.o"

# External object files for target sim
sim_EXTERNAL_OBJECTS =

sim: CMakeFiles/sim.dir/sim.cc.o
sim: CMakeFiles/sim.dir/build.make
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4Tree.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4FR.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4GMocren.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4visHepRep.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4RayTracer.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4VRML.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4OpenGL.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4gl2ps.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4visQt3D.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4vis_management.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4modeling.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4interfaces.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4persistency.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4error_propagation.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4readout.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4physicslists.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4tasking.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4parmodels.dylib
sim: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/OpenGL.framework/OpenGL.tbd
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtOpenGL.framework/QtOpenGL
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtPrintSupport.framework/QtPrintSupport
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtWidgets.framework/QtWidgets
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DExtras.framework/Qt3DExtras
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DInput.framework/Qt3DInput
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtGamepad.framework/QtGamepad
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DLogic.framework/Qt3DLogic
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DRender.framework/Qt3DRender
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DCore.framework/Qt3DCore
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtGui.framework/QtGui
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtNetwork.framework/QtNetwork
sim: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtCore.framework/QtCore
sim: /opt/homebrew/lib/libxerces-c.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4run.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4event.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4tracking.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4processes.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4analysis.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4tools.dylib
sim: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/libexpat.tbd
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4digits_hits.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4track.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4particles.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4geometry.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4materials.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4zlib.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4graphics_reps.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4intercoms.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4global.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4clhep.dylib
sim: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4ptl.0.0.2.dylib
sim: CMakeFiles/sim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sim.dir/build: sim
.PHONY : CMakeFiles/sim.dir/build

CMakeFiles/sim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sim.dir/clean

CMakeFiles/sim.dir/depend:
	cd /Users/tengizibrayev/sim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tengizibrayev/sim /Users/tengizibrayev/sim /Users/tengizibrayev/sim/build /Users/tengizibrayev/sim/build /Users/tengizibrayev/sim/build/CMakeFiles/sim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sim.dir/depend

