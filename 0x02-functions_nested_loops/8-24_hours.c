#include "main.h"


/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: nothing.
 */

void jack_bauer(void)
{

int x;

int j;

for (x = 0; x <= 23; x++)
{
for (j = 0; j <= 59; j++)
{
_putchar((x / 10) + '0');

_putchar((x % 10) + '0');

_putchar(':');

_putchar((j / 10) + '0');

_putchar((j % 10) + '0');

_putchar('\n');
}

}



}
