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
CMAKE_SOURCE_DIR = /home/alse-i/Documentos/PROYECTO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alse-i/Documentos/PROYECTO/build

# Utility rule file for clima_autogen.

# Include the progress variables for this target.
include CMakeFiles/clima_autogen.dir/progress.make

CMakeFiles/clima_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alse-i/Documentos/PROYECTO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target clima"
	/usr/bin/cmake -E cmake_autogen /home/alse-i/Documentos/PROYECTO/build/CMakeFiles/clima_autogen.dir ""

clima_autogen: CMakeFiles/clima_autogen
clima_autogen: CMakeFiles/clima_autogen.dir/build.make

.PHONY : clima_autogen

# Rule to build all files generated by this target.
CMakeFiles/clima_autogen.dir/build: clima_autogen

.PHONY : CMakeFiles/clima_autogen.dir/build

CMakeFiles/clima_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clima_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clima_autogen.dir/clean

CMakeFiles/clima_autogen.dir/depend:
	cd /home/alse-i/Documentos/PROYECTO/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alse-i/Documentos/PROYECTO /home/alse-i/Documentos/PROYECTO /home/alse-i/Documentos/PROYECTO/build /home/alse-i/Documentos/PROYECTO/build /home/alse-i/Documentos/PROYECTO/build/CMakeFiles/clima_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clima_autogen.dir/depend

