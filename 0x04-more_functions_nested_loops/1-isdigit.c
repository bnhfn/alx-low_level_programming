#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function
 * desccription: function that checks for a digit (0 through 9).
 *
 *Return: 1 if c is a digit || Return: 0 if c is not a digit.
 *@c: store an integer value
 **/
int _isdigit(int c)
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
