# Begginer C concepts
This is a repository containing simple examples of the basic tools of the C programming language, taught by Holberton
## Requirements
- A C compiler (The one used for this project is (gcc)[https://gcc.gnu.org/])
To install on Debian-based Linux distros (we used Ubuntu)
```
$ sudo apt update
$ sudo apt install build-essential
$ sudo apt-get install manpages-dev
```
## Usage
Usually, ecause these are example scripts in directories, there are no ``main.c`` files. But you can make some on your own in each folder to test my code there. There are header files in (almost) all of the folders, that you can include in your ``main.c`` file:
```
$ cd example_directory/
example_directory$ echo '#include "<header file here...>"' main.c
```
Then you can compile these files with  GCC (GNU Compiler Collection):
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <files> main.c -o output
```
Then run them:
```
$ ./output
```
