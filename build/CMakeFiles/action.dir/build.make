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
include CMakeFiles/action.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/action.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/action.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/action.dir/flags.make

CMakeFiles/action.dir/action.cc.o: CMakeFiles/action.dir/flags.make
CMakeFiles/action.dir/action.cc.o: /Users/tengizibrayev/sim/action.cc
CMakeFiles/action.dir/action.cc.o: CMakeFiles/action.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/action.dir/action.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/action.dir/action.cc.o -MF CMakeFiles/action.dir/action.cc.o.d -o CMakeFiles/action.dir/action.cc.o -c /Users/tengizibrayev/sim/action.cc

CMakeFiles/action.dir/action.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/action.dir/action.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/action.cc > CMakeFiles/action.dir/action.cc.i

CMakeFiles/action.dir/action.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/action.dir/action.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/action.cc -o CMakeFiles/action.dir/action.cc.s

CMakeFiles/action.dir/generator.cc.o: CMakeFiles/action.dir/flags.make
CMakeFiles/action.dir/generator.cc.o: /Users/tengizibrayev/sim/generator.cc
CMakeFiles/action.dir/generator.cc.o: CMakeFiles/action.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/action.dir/generator.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/action.dir/generator.cc.o -MF CMakeFiles/action.dir/generator.cc.o.d -o CMakeFiles/action.dir/generator.cc.o -c /Users/tengizibrayev/sim/generator.cc

CMakeFiles/action.dir/generator.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/action.dir/generator.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/generator.cc > CMakeFiles/action.dir/generator.cc.i

CMakeFiles/action.dir/generator.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/action.dir/generator.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/generator.cc -o CMakeFiles/action.dir/generator.cc.s

CMakeFiles/action.dir/construction.cc.o: CMakeFiles/action.dir/flags.make
CMakeFiles/action.dir/construction.cc.o: /Users/tengizibrayev/sim/construction.cc
CMakeFiles/action.dir/construction.cc.o: CMakeFiles/action.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/action.dir/construction.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/action.dir/construction.cc.o -MF CMakeFiles/action.dir/construction.cc.o.d -o CMakeFiles/action.dir/construction.cc.o -c /Users/tengizibrayev/sim/construction.cc

CMakeFiles/action.dir/construction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/action.dir/construction.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/construction.cc > CMakeFiles/action.dir/construction.cc.i

CMakeFiles/action.dir/construction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/action.dir/construction.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/construction.cc -o CMakeFiles/action.dir/construction.cc.s

CMakeFiles/action.dir/detector.cc.o: CMakeFiles/action.dir/flags.make
CMakeFiles/action.dir/detector.cc.o: /Users/tengizibrayev/sim/detector.cc
CMakeFiles/action.dir/detector.cc.o: CMakeFiles/action.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/action.dir/detector.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/action.dir/detector.cc.o -MF CMakeFiles/action.dir/detector.cc.o.d -o CMakeFiles/action.dir/detector.cc.o -c /Users/tengizibrayev/sim/detector.cc

CMakeFiles/action.dir/detector.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/action.dir/detector.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/detector.cc > CMakeFiles/action.dir/detector.cc.i

CMakeFiles/action.dir/detector.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/action.dir/detector.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/detector.cc -o CMakeFiles/action.dir/detector.cc.s

CMakeFiles/action.dir/physics.cc.o: CMakeFiles/action.dir/flags.make
CMakeFiles/action.dir/physics.cc.o: /Users/tengizibrayev/sim/physics.cc
CMakeFiles/action.dir/physics.cc.o: CMakeFiles/action.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/action.dir/physics.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/action.dir/physics.cc.o -MF CMakeFiles/action.dir/physics.cc.o.d -o CMakeFiles/action.dir/physics.cc.o -c /Users/tengizibrayev/sim/physics.cc

CMakeFiles/action.dir/physics.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/action.dir/physics.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/physics.cc > CMakeFiles/action.dir/physics.cc.i

CMakeFiles/action.dir/physics.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/action.dir/physics.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/physics.cc -o CMakeFiles/action.dir/physics.cc.s

CMakeFiles/action.dir/sim.cc.o: CMakeFiles/action.dir/flags.make
CMakeFiles/action.dir/sim.cc.o: /Users/tengizibrayev/sim/sim.cc
CMakeFiles/action.dir/sim.cc.o: CMakeFiles/action.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/action.dir/sim.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/action.dir/sim.cc.o -MF CMakeFiles/action.dir/sim.cc.o.d -o CMakeFiles/action.dir/sim.cc.o -c /Users/tengizibrayev/sim/sim.cc

CMakeFiles/action.dir/sim.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/action.dir/sim.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tengizibrayev/sim/sim.cc > CMakeFiles/action.dir/sim.cc.i

CMakeFiles/action.dir/sim.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/action.dir/sim.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tengizibrayev/sim/sim.cc -o CMakeFiles/action.dir/sim.cc.s

# Object files for target action
action_OBJECTS = \
"CMakeFiles/action.dir/action.cc.o" \
"CMakeFiles/action.dir/generator.cc.o" \
"CMakeFiles/action.dir/construction.cc.o" \
"CMakeFiles/action.dir/detector.cc.o" \
"CMakeFiles/action.dir/physics.cc.o" \
"CMakeFiles/action.dir/sim.cc.o"

# External object files for target action
action_EXTERNAL_OBJECTS =

action: CMakeFiles/action.dir/action.cc.o
action: CMakeFiles/action.dir/generator.cc.o
action: CMakeFiles/action.dir/construction.cc.o
action: CMakeFiles/action.dir/detector.cc.o
action: CMakeFiles/action.dir/physics.cc.o
action: CMakeFiles/action.dir/sim.cc.o
action: CMakeFiles/action.dir/build.make
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4Tree.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4FR.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4GMocren.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4visHepRep.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4RayTracer.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4VRML.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4OpenGL.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4gl2ps.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4visQt3D.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4vis_management.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4modeling.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4interfaces.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4persistency.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4error_propagation.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4readout.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4physicslists.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4tasking.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4parmodels.dylib
action: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/OpenGL.framework/OpenGL.tbd
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtOpenGL.framework/QtOpenGL
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtPrintSupport.framework/QtPrintSupport
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtWidgets.framework/QtWidgets
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DExtras.framework/Qt3DExtras
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DInput.framework/Qt3DInput
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtGamepad.framework/QtGamepad
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DLogic.framework/Qt3DLogic
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DRender.framework/Qt3DRender
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/Qt3DCore.framework/Qt3DCore
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtGui.framework/QtGui
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtNetwork.framework/QtNetwork
action: /opt/homebrew/Cellar/qt@5/5.15.8_1/lib/QtCore.framework/QtCore
action: /opt/homebrew/lib/libxerces-c.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4run.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4event.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4tracking.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4processes.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4analysis.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4tools.dylib
action: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/libexpat.tbd
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4digits_hits.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4track.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4particles.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4geometry.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4materials.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4zlib.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4graphics_reps.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4intercoms.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4global.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4clhep.dylib
action: /Users/tengizibrayev/Desktop/Geant4/project/lib/libG4ptl.0.0.2.dylib
action: CMakeFiles/action.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tengizibrayev/sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable action"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/action.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/action.dir/build: action
.PHONY : CMakeFiles/action.dir/build

CMakeFiles/action.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/action.dir/cmake_clean.cmake
.PHONY : CMakeFiles/action.dir/clean

CMakeFiles/action.dir/depend:
	cd /Users/tengizibrayev/sim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tengizibrayev/sim /Users/tengizibrayev/sim /Users/tengizibrayev/sim/build /Users/tengizibrayev/sim/build /Users/tengizibrayev/sim/build/CMakeFiles/action.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/action.dir/depend

