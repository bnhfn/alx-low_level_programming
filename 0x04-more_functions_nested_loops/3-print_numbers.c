#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function
 * description: function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * @i: store an integer value
 * return: void
 **/

void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
