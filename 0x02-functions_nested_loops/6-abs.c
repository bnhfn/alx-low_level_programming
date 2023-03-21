#include <stdio.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * Description: return abs value of a given number
 * @x: the integer value to be computed
 *
 * Return: always 0 (success)
*/

int _abs(int x)
{
int x, y;
y = abs(x);

_putchar(y);

return (0);
}
