#include "main.h"
#include "strlen.c"
/**
 * puts_half -prints half of int
 *
 * @str: string to be split
 */
void puts_half(char *str)
{
int i;
int oE = 0;
if (_strlen(str) % 2 != 0)
{
oE += 1;
}
for (i = (_strlen(str) + oE) / 2; i < _strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
