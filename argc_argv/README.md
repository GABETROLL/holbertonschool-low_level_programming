# How to use command arguments in C.
---
Each space in the command line acts as a separator for arguments.
Quotes make spaces not count: program "Hello, World!" -> {"program", "Hello, World!"}
---
## argc
The amount of arguments that were placed in the command line when calling the program, INCLUDING the programs' name, sometimes followed by './'.
## argv
Array of pointers to each argument.

