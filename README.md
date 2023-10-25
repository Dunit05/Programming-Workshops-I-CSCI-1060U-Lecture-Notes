# Programming-Workshops-I-CSCI-1060U-Lecture-Notes

Here you will find all the in-class lecture code that we go over. This repository is a comprehensive collection of code examples, projects, and exercises designed to complement the material covered in the intro to Programming Workshop I lectures.

## References/Tools

- [C++ Reference](http://www.cplusplus.com/reference/)
- [C++ cstdio](https://cplusplus.com/reference/cstdio/printf/)

### Format Specifiers

- %d or %i Either can represent an integer
- %c A character
- %f A floating point number
- %e A large floating point number in scientific notation
- %% This prints an actual percent sign, in case you need one

### Compiling a Program

The first step in learning how to use g++ is to compile a single file program.
In the file directory, run `g++ example_program.cpp` in the command line.
The above command will compile the program and create a machine code executable called a.out.
In the file directory, run `./a.out` in the command line.

If you want to name the executable something other than a.out you can use the –o option
In the file directory, run `g++ example_program.cpp –o ex_prog` in the command line.
In the file directory, run `./ex_prog` in the command line.

### Key Table

- std::cout << "Hello World!" << std::endl; // prints Hello World!
- printf("Hello World!\n"); // prints Hello World!

## Folder Structure

The workspace contains folders labeled by `date (name)` by default, where:

- `Notes`: the folder contains the days lecture notes, with an executable C++ files `index.cpp` & `index.exe`.
- `Exercises`: the folder contains the days exercises, with an executable C++ files `(exerciseName).cpp` & `(exerciseName).exe`.

## Getting Started

Ensure you have a C++ compiler installed on your machine. If you are using Windows, you can use [MinGW](http://www.mingw.org/) or [Visual Studio](https://visualstudio.microsoft.com/vs/features/cplusplus/). If you are using Linux or MacOS, you can use [GCC](https://gcc.gnu.org/).
