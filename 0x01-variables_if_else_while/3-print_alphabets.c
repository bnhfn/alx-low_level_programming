#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase.
 * Description: Use only putchar.
 * Return: Always 0 (Success)
*/
int main(void)
{
int lo, up;
for (lo = 'a'; lo <= 'z'; lo++)
{
putchar(lo);
}
for (up = 'A'; up <= 'Z'; up++)
{
putchar(up);
}
putchar('\n');
return (0);
}

