Terminal Notes

- Navigation

```
ls (List) lists all files and folders in the current directory
ls -l also includes info about those files (e.g. size)
cd <directory> - Change Directory (to <directory>)
cd .. returns back up one directory level
cd <directory_path> allows you to move through multiple directories in a single command
```

- File Manipulation

```
You can manage files/directories in terminal using:
touch <file_name>
Creates an empty file called file_name
mv <file_name> <directory>
Moves file_name to <directory>
cp <file_name> <directory>
Makes a copy of file_name in <directory>
rm <file_name>
Removes/deletes <file_name>
Be careful using this command!!
mkdir <directory>
Makes a new empty directory called <directory>
```

- Compiling a Program

```
The first step in learning how to use g++ is to compile a single file program.

g++ example_program.cpp

The above command will compile the program and create a machine code executable called a.out which can be run by typing:

./a.out
```

- Compiling your first Program

```
If you want to name the executable something other than a.out you can use the –o option

g++ example_program.cpp –o ex_prog


The above command will compile the program and links it to create the executable.
This is the same as doing these two steps one at a time:

g++ -c example_program.cpp
g++ example_program.o –o ex_prog
```
