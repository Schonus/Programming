# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Qt\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = C:\Qt\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Programming\QT\chapter_2\QT_vscode_Text

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Programming\QT\chapter_2\QT_vscode_Text\build

# Utility rule file for QT_Test_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QT_Test_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QT_Test_autogen.dir/progress.make

CMakeFiles/QT_Test_autogen: QT_Test_autogen/timestamp

QT_Test_autogen/timestamp: C:/Qt/6.2.4/mingw_64/./bin/moc.exe
QT_Test_autogen/timestamp: C:/Qt/6.2.4/mingw_64/./bin/uic.exe
QT_Test_autogen/timestamp: CMakeFiles/QT_Test_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\Programming\QT\chapter_2\QT_vscode_Text\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QT_Test"
	C:\Qt\Tools\CMake_64\bin\cmake.exe -E cmake_autogen D:/Programming/QT/chapter_2/QT_vscode_Text/build/CMakeFiles/QT_Test_autogen.dir/AutogenInfo.json ""
	C:\Qt\Tools\CMake_64\bin\cmake.exe -E touch D:/Programming/QT/chapter_2/QT_vscode_Text/build/QT_Test_autogen/timestamp

QT_Test_autogen: CMakeFiles/QT_Test_autogen
QT_Test_autogen: QT_Test_autogen/timestamp
QT_Test_autogen: CMakeFiles/QT_Test_autogen.dir/build.make
.PHONY : QT_Test_autogen

# Rule to build all files generated by this target.
CMakeFiles/QT_Test_autogen.dir/build: QT_Test_autogen
.PHONY : CMakeFiles/QT_Test_autogen.dir/build

CMakeFiles/QT_Test_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QT_Test_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QT_Test_autogen.dir/clean

CMakeFiles/QT_Test_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Programming\QT\chapter_2\QT_vscode_Text D:\Programming\QT\chapter_2\QT_vscode_Text D:\Programming\QT\chapter_2\QT_vscode_Text\build D:\Programming\QT\chapter_2\QT_vscode_Text\build D:\Programming\QT\chapter_2\QT_vscode_Text\build\CMakeFiles\QT_Test_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/QT_Test_autogen.dir/depend
