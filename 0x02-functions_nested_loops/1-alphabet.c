#include <stdio.h>
/**
 * main- print_alphabet
 * parameter: print_alphabet
 *followed by a new line
 *Return: Always 0 (success)
 */
int main(void)
{
	int print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		putchar(print_alphabet);
	}
	putchar('\n');
	return (0);
}
