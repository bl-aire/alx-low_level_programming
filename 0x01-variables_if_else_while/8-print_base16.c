#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
unsigned char i;
for (i = 0; i < 10; i++)
{
putchar(i);
}
for (i = 'a'; i < 'g'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
