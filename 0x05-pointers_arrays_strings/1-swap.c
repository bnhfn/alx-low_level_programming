#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: store an integer value
 * @b: store an integer value
 * return: always (0) succes.
 **/
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
