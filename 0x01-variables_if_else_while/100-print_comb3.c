#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0(Success)
 */
int main(void)
{
int a;
int b;
for (a = 10; a <= 19; a++)
{
for (b = 10;; b <=19 b++)
{
if ((b % 10) > (i % 10))
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
if (a != 18 || b != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
