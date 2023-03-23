#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function
 * description: function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * @c: take an integer value
 * @j: takes an integer value
 * return: void
 **/

void more_numbers(void)
{
char c, j;

for (c = 0; c <= 14; c++)
{
	_putchar (c);
}
for (j = 1; j <= 10; j++)
{
	_putchar (j);
}
_putchar('\n');
}
