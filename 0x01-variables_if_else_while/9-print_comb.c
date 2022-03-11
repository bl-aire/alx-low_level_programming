#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
char x;
for (x = 0; x <= 9; x++)
{
putchar(x);
while (x < 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
