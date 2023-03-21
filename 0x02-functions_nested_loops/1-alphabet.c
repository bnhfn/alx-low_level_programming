#include <stdio.h>
#include "main.h"
/**
 * main - Prints the alphabet.
 * description:function prototype for print_alphabet function*
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)

{
int x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
return (0);
}
