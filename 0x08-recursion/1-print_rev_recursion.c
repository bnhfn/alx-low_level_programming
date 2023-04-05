#include "main.h"

/**
 * _print_rev_recursion - function that prints a reverse recursion
 * @s: input
 * return: always 0 success
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
