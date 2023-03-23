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
if (c >= 48 && c <= 57)
return (0);
else
return (1);
}
