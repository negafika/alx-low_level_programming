#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints the string
 * @str: is the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
int i;
int len;

len = 0;
while (*(str + len) != '\0')
	len++;
i = 0;
while (i < len)
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
