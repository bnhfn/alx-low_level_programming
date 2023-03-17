#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase.
 * Description: Use only putchar.
 * Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
putchar('\n');
}
return (0);
}
