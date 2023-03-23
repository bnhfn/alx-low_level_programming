#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function
 * description: function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * @i: store an integer value
 * return: o (success)
 **/

void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
	_putchar(i);
return (0);
}
