#include<stdio.h>
/**
 * main - A program that prints all single digit number.
 * Description: Use putchar twice.
 * Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
for (i = 1; i <= 9; i++)
{
putchar('%d',i);
}
putchar('\n');
return (0);
}
