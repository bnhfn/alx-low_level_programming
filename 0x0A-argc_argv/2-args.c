#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	printf("%s\n", argv[counter]);
	return (0);
}
