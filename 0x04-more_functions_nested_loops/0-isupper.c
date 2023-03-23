#include <stdio.h>
#include "main.h"

/**
 * _isupper - function
 * description: function that checks for uppercase character
 *
 * Return: 1 if c is uppercase || return 0 if c isn't uppercase.
 *@c: takes an integer value
 */
int _isupper(int c)
{


if (c == 65 && c <= 91)
{
	return (1);
}

else
{
return (0);
}
}
