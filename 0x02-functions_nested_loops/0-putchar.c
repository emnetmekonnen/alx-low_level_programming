#include "main.h"

/**
* main - Program that prints _putchar, followed by a new line.
* Return:0 on (success)
*/

int main()
{
char chr[8] = "_putchar";
int i;
for(i=0;i<7;i++)
{
_putchar(chr[i]);
}
_putchar('\n');
return (0);
}
