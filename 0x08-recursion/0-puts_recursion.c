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
while (s[i+1] != '\0')
	_putchar(s[i+1]);
_putchar('\n');
}
