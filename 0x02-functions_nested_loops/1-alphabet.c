#include <stdio.h>
#include "main.h"
/**
 * main- print_alphabet
 * parameter: print_alphabet
 *followed by a new line
 *Return: Always 0 (success)
 */
void print_alphabet(void);
/**function prototype for print_alphabet*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
