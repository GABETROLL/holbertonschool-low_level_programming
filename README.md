# Begginer C concepts
This is a repository containing exercises, (challenging) challenges and examples of the basic tools of the C programming language, taught by Holberton.
Each individual folder has files that use the tools of The C Programming Language.

While each folder contains example code that uses the features, this repository lacks explanations, tutorials or README.md quality in each folder.
## Code styles and Standards
- [Betty](https://github.com/holbertonschool/Betty) linter 
- [gnu89](https://gcc.gnu.org/onlinedocs/gcc-3.4.6/gcc/Standards.html) standard
## Requirements For Installation
- A C compiler (The one used for this project is [gcc](https://gcc.gnu.org/))
To install on Debian-based Linux distros (we used Ubuntu)
```
$ sudo apt install build-essential
$ sudo apt-get install manpages-dev
```
- [Git](https://git-scm.com/downloads)
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
Sometimes, because these are example scripts in directories, there are no ``main.c`` files. But, you can make some on your own in each folder to test my code there. There are header files in (almost) all of the folders, that you can include in your ``main.c`` file:
```
#include "main.h"

int main(int argc, char **argv) {
  /* your code here */
  return (0);
}
```
Then you can compile these files with  [GCC](https://gcc.gnu.org/) (GNU Compiler Collection):
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
## Creator
Hello, I'm Gabriel Fernandez, the creator of this project. I first started programming in Python, in late 2019, and made my first small games in Pygame, from YouTube tutorials. I then started Holberton in September 2022, and chose Web Development as my Holberton Specialization.

### My Contacts
<a href="https://www.linkedin.com/in/gabriel-fernandez-415609278/" target="_blank">
<img src=https://img.shields.io/badge/linkedin-%231E77B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white alt=LinkedIn style="margin-bottom: 5px;" />
</a>

<a href="https://twitter.com/gabe_programs" target="_blank">
<img src="https://img.shields.io/badge/X-000000?style=for-the-badge&logo=x&logoColor=white" />
</a>

My Portfolio Project
https://github.com/GABETROLL/Tetris3D/

## Building this Project
During the first 3 months of the Holberton program, we are taught C. I had started using C about a few weeks before the course started, since they told us to prepare ourselves for it. The first few dozen projects for Holberton since the first few weeks of the course, until the start of the 2nd trimester, we slowly built this repository with its exercises.

Throughout this time, I studied the C programming language closely and passionately. I used to also use ``gcc -S`` to see the assembly code produced, and learned a lot more about how C works, and how effective it is.

My biggest challenge was https://github.com/GABETROLL/holbertonschool-low_level_programming/doubly_linked_lists/ , which took me a few days, since I kept confusing the pointers.
Other big challenges were:
- pointers
- [static libraries](https://github.com/GABETROLL/holbertonschool-low_level_programming/static_libraries/)
- [makefiles](https://github.com/GABETROLL/holbertonschool-low_level_programming/makefiles/)
- [variadic functions](https://github.com/GABETROLL/holbertonschool-low_level_programming/variadic_functions/)
- [file IO](https://github.com/GABETROLL/holbertonschool-low_level_programming/file_io/)
- Everything
