#include <stdio.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * Description: return abs value of a given number
 * @n: the integer value to be computed
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
