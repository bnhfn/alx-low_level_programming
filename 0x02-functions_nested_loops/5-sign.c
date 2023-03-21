#include <stdio.h>
#include "main.h"

/**
 * print_sign - Function
 * Description: prints the sign of a number
 * Return: 1 if n>0 || 0 n=0 || -1 if n>0
 * @n: store an integer value
*/

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-1");
return (-1);
}
}
