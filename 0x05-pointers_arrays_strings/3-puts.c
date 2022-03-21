#include "main.h"
#include "2-strlen.c"
/**
 * _puts - prints a string, followed by new line to stdout
 * @str: pointer to string to be printed
 */
void _puts(char *str)
{
int i;
for (i = 0; *(str + i) != '\0'; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
