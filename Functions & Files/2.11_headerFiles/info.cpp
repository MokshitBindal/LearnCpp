/*
Header files usually have a .h extension, but you will occasionally see them with a .hpp extension or no extension at all.
header files are used to propagate a bunch of related forward declarations into a code file.

like- std::cout has been forward declared in the “iostream” header file

When you #include a file, the content of the included file is inserted at the point of inclusion.
This provides a useful way to pull in declarations from another file.

Unlike source files, header files should not be added to your compile command,
they are auto compiled when we include them somewhere.

you should avoid putting function or variable definitions in header files as it violates One definition rule.

the linker will see that there are now two definitions for function add():
one in main.cpp, and one in add.cpp. This is a violation of ODR part 2
"Within a given program, a variable or normal function can only have one definition.”

Source files should #include their paired header file (if one exists).

Although the preprocessor will happily do so, you should generally not #include .cpp files.
These should be added to your project and compiled.

You’re probably curious why we use angled brackets for iostream, and double quotes for add.h:
When we use angled brackets, we’re telling the preprocessor that this is a header file we didn’t write ourselves.
The preprocessor will search for the header only in the directories specified by the include directories.
The preprocessor will not search for the header file in your project’s source code directory.

When we use double-quotes, we’re telling the preprocessor that this is a header file that we wrote.
The preprocessor will first search for the header file in the current directory, then search the include directories.

iostream.h is a different header file than iostream!

Header type	               Naming convention	Example	Identifiers     placed in namespace
C++ specific (new)	            <xxx>	            iostream	            std namespace
C compatibility (new)	        <cxxx>	            cstddef	        std namespace (required)global namespace (optional)
C++ specific (old)	            <xxx.h>	            iostream.h	        Global namespace
C compatibility (old)	        <xxx.h>	            stddef.h	        Global namespace (required)std namespace (optional)

When header files #include other header files,These additional header files are sometimes called transitive includes.

The headers for each grouping should be sorted alphabetically (unless the documentation for a 
3rd party library instructs you to do otherwise).


*/

// something.h :
// int something(int); // return type of forward declaration is int

// something.cpp :
// #include "something.h"
// void something(int) // error: wrong return type
// {
// }