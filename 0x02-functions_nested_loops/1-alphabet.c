#include "main.h"
/**
* Function that prints the alphabet, in lowercase, followed by a new line.
* Return:0 on(success)
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
