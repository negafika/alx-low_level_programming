#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string with a new line
 *@s: the input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
int i;

i = 0;
if (s[i] == '\0')
{
_putchar(\n);
return;
}
_putchar(s[i]);
i++;
}
