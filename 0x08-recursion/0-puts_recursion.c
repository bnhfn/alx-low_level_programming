#include "main.h"

/**
 * _puts_recursion - function that prints a recursion
 * @s: input
 * return: always 0 success
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n')
}
