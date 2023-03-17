#include<stdio.h>
/**
 * main - A program that prints all single digit number.
 * Description: Use putchar twice.
 * Return: Always 0 (Success)
*/
int main()
{
char hex_digits[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}
putchar('\n');
return 0;
}
