#include<stdio.h>
/**
 * main - A program that prints all single digit number.
 * Description: Use putchar twice.
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i <= 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
