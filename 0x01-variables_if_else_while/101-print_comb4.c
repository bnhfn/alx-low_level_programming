#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m, l;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
for (l = 50; l <= 58; l++)
{
if (l > m > n)
{
putchar(n);
putchar(m);
putchar(l);
if (n != 56 || m != 57 || l != 58)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
