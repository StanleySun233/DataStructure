# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Data\ClionProject\DataStructure\LessonTwo\proj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\proj.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\proj.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\proj.dir\flags.make

CMakeFiles\proj.dir\main.cpp.obj: CMakeFiles\proj.dir\flags.make
CMakeFiles\proj.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proj.dir/main.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\proj.dir\main.cpp.obj /FdCMakeFiles\proj.dir\ /FS -c D:\Data\ClionProject\DataStructure\LessonTwo\proj\main.cpp
<<

CMakeFiles\proj.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/main.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\proj.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\DataStructure\LessonTwo\proj\main.cpp
<<

CMakeFiles\proj.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/main.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\proj.dir\main.cpp.s /c D:\Data\ClionProject\DataStructure\LessonTwo\proj\main.cpp
<<

CMakeFiles\proj.dir\ADT.cpp.obj: CMakeFiles\proj.dir\flags.make
CMakeFiles\proj.dir\ADT.cpp.obj: ..\ADT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/proj.dir/ADT.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\proj.dir\ADT.cpp.obj /FdCMakeFiles\proj.dir\ /FS -c D:\Data\ClionProject\DataStructure\LessonTwo\proj\ADT.cpp
<<

CMakeFiles\proj.dir\ADT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/ADT.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\proj.dir\ADT.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\DataStructure\LessonTwo\proj\ADT.cpp
<<

CMakeFiles\proj.dir\ADT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/ADT.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\proj.dir\ADT.cpp.s /c D:\Data\ClionProject\DataStructure\LessonTwo\proj\ADT.cpp
<<

# Object files for target proj
proj_OBJECTS = \
"CMakeFiles\proj.dir\main.cpp.obj" \
"CMakeFiles\proj.dir\ADT.cpp.obj"

# External object files for target proj
proj_EXTERNAL_OBJECTS =

proj.exe: CMakeFiles\proj.dir\main.cpp.obj
proj.exe: CMakeFiles\proj.dir\ADT.cpp.obj
proj.exe: CMakeFiles\proj.dir\build.make
proj.exe: CMakeFiles\proj.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable proj.exe"
	"D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\proj.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- "D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\proj.dir\objects1.rsp @<<
 /out:proj.exe /implib:proj.lib /pdb:D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug\proj.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\proj.dir\build: proj.exe
.PHONY : CMakeFiles\proj.dir\build

CMakeFiles\proj.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\proj.dir\cmake_clean.cmake
.PHONY : CMakeFiles\proj.dir\clean

CMakeFiles\proj.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Data\ClionProject\DataStructure\LessonTwo\proj D:\Data\ClionProject\DataStructure\LessonTwo\proj D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug D:\Data\ClionProject\DataStructure\LessonTwo\proj\cmake-build-debug\CMakeFiles\proj.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\proj.dir\depend

