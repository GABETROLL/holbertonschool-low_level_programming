# Begginer C concepts
This is a repository containing simple examples of the basic tools of the C programming language, taught by Holberton
Each individual folder has files and a README.md that teach you how to use the C concepts/tools specified by the folder name.
## Requirements For Installation
- A C compiler (The one used for this project is (gcc)[https://gcc.gnu.org/])
To install on Debian-based Linux distros (we used Ubuntu)
```
$ sudo apt install build-essential
$ sudo apt-get install manpages-dev
```
- (Git)[https://git-scm.com/downloads]
```
$ sudo apt install git
```
## Installation
(on the directory you want to put the repository directory)
```
$ git clone git@github.com:GABETROLL/holbertonschool-low_level_programming.git
$ cd holbertonschool-low_level_programming/
```
## Usage
Usually, ecause these are example scripts in directories, there are no ``main.c`` files. But you can make some on your own in each folder to test my code there. There are header files in (almost) all of the folders, that you can include in your ``main.c`` file:
```
#include "main.h"

int main(int argc, char **argv) {
  /* your code here */
  return (0);
}
```
Then you can compile these files with  GCC (GNU Compiler Collection):
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <files> main.c -o output
```
Fresh out of the box, all of my files *should* comply with ``-std=gnu89``, but your ``main.c`` files/other test files may not.
In that case, either fix the ``main.c`` files to comply with ``-std-gnu89`` or compile the files using:
```
$ gcc -Wall -Werror -Wextra -pedantic <files> main.c -o output
```
Please do not remove the other flags. They help your code from having undefined behaviors/unexpected crashes/bad practices.
Then run them:
```
$ ./output
```
