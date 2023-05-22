# Bit manipulation
## Special files:
``_putchar.c``
An implementation of the real ``putchar`` function in the ``stdio.h`` header library, implemented by Holberton to encourage us to write everything ourselves to understand the C language from the root, and not use the standard functions.
It's also used in ``main.h``
## Scripts:
0. Turn string of bits into an integer
1. Print an integer in its binary form
2. Get a bit in a position in an unsigned integer (as an int)
3. Set a bit in a position in an integer
4. Set a bit in a position in an integer to a 0
5. Calculate the amount of bits you'd need to flip in one unisgned int to get another
## Usage
Make a ``main.c`` file in this directory:
```
#include "main.h"

int main(int argc, char **argv) {
  /* your code here */
  return (0);
}
```
compile it:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c ... -o output
```
(If this step doesn't work, try not specifying the standard, or fix your code to match gnu89, or any other standard you wish to use):
```
$ gcc -Wall -Werror -Wextra -pedantic main.c ... -o output
```
Run it:
```
$ ./output
```
