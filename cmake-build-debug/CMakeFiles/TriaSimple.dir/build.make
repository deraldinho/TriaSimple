# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\TriaSimple.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\TriaSimple.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\TriaSimple.dir\flags.make

CMakeFiles\TriaSimple.dir\main.c.obj: CMakeFiles\TriaSimple.dir\flags.make
CMakeFiles\TriaSimple.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TriaSimple.dir/main.c.obj"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\TriaSimple.dir\main.c.obj /FdCMakeFiles\TriaSimple.dir\ /FS -c "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\main.c"
<<

CMakeFiles\TriaSimple.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TriaSimple.dir/main.c.i"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\TriaSimple.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\main.c"
<<

CMakeFiles\TriaSimple.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TriaSimple.dir/main.c.s"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\TriaSimple.dir\main.c.s /c "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\main.c"
<<

# Object files for target TriaSimple
TriaSimple_OBJECTS = \
"CMakeFiles\TriaSimple.dir\main.c.obj"

# External object files for target TriaSimple
TriaSimple_EXTERNAL_OBJECTS =

TriaSimple.exe: CMakeFiles\TriaSimple.dir\main.c.obj
TriaSimple.exe: CMakeFiles\TriaSimple.dir\build.make
TriaSimple.exe: CMakeFiles\TriaSimple.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TriaSimple.exe"
	"C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\TriaSimple.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\TriaSimple.dir\objects1.rsp @<<
 /out:TriaSimple.exe /implib:TriaSimple.lib /pdb:"C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug\TriaSimple.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\TriaSimple.dir\build: TriaSimple.exe

.PHONY : CMakeFiles\TriaSimple.dir\build

CMakeFiles\TriaSimple.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TriaSimple.dir\cmake_clean.cmake
.PHONY : CMakeFiles\TriaSimple.dir\clean

CMakeFiles\TriaSimple.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple" "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple" "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug" "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug" "C:\Users\deraldinho\Desktop\Faculdade\Algoritimos 2\TriaSimple\cmake-build-debug\CMakeFiles\TriaSimple.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\TriaSimple.dir\depend

