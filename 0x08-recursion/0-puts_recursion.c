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
if (*s)
	_puts_recursion(s + 1);
else
	_putchar('\n');

}
