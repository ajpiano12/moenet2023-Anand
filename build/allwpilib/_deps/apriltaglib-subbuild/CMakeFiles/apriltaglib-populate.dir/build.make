# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild

# Utility rule file for apriltaglib-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/apriltaglib-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/apriltaglib-populate.dir/progress.make

CMakeFiles/apriltaglib-populate: CMakeFiles/apriltaglib-populate-complete

CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-install
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-mkdir
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-download
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-patch
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-configure
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-build
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-install
CMakeFiles/apriltaglib-populate-complete: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'apriltaglib-populate'"
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles/apriltaglib-populate-complete
	/usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-done

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update:
.PHONY : apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-build: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'apriltaglib-populate'"
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E echo_append
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-build

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-configure: apriltaglib-populate-prefix/tmp/apriltaglib-populate-cfgcmd.txt
apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-configure: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'apriltaglib-populate'"
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E echo_append
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-configure

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-download: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-gitinfo.txt
apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-download: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'apriltaglib-populate'"
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps && /usr/bin/cmake -P /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/tmp/apriltaglib-populate-gitclone.cmake
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps && /usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-download

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-install: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'apriltaglib-populate'"
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E echo_append
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-install

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'apriltaglib-populate'"
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-src
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/tmp
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src
	/usr/bin/cmake -E make_directory /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp
	/usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-mkdir

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-patch: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'apriltaglib-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-patch

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update:
.PHONY : apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-test: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'apriltaglib-populate'"
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E echo_append
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-build && /usr/bin/cmake -E touch /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-test

apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'apriltaglib-populate'"
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-src && /usr/bin/cmake -P /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/apriltaglib-populate-prefix/tmp/apriltaglib-populate-gitupdate.cmake

apriltaglib-populate: CMakeFiles/apriltaglib-populate
apriltaglib-populate: CMakeFiles/apriltaglib-populate-complete
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-build
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-configure
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-download
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-install
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-mkdir
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-patch
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-test
apriltaglib-populate: apriltaglib-populate-prefix/src/apriltaglib-populate-stamp/apriltaglib-populate-update
apriltaglib-populate: CMakeFiles/apriltaglib-populate.dir/build.make
.PHONY : apriltaglib-populate

# Rule to build all files generated by this target.
CMakeFiles/apriltaglib-populate.dir/build: apriltaglib-populate
.PHONY : CMakeFiles/apriltaglib-populate.dir/build

CMakeFiles/apriltaglib-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/apriltaglib-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/apriltaglib-populate.dir/clean

CMakeFiles/apriltaglib-populate.dir/depend:
	cd /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild /home/moenet/moenet2023-Anand/build/allwpilib/_deps/apriltaglib-subbuild/CMakeFiles/apriltaglib-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/apriltaglib-populate.dir/depend
