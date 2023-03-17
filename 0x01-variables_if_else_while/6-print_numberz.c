#include<stdio.h>
/**
 * main - A program that prints all single digit number.
 * Description: Use putchar twice.
 * Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
putchar("%d", ch);
putchar("\n");
return (0);
}
