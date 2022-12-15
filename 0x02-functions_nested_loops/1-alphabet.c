#include "main.h"
/**
* Function that prints the alphabet, in lowercase, followed by a new line.
*
*/

/* function that print alphabet  */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
