#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints string
 * @str: the string input
 *
 * Return: void
 */
void puts_half(char *str)
{
int len;
int i;

len = 0;
while (*(str + len) != '\0')
	len++;
i = 0;
while (i > (len / 2) && i < len)
{
if (len % 2 == 0)	
	_putchar(*(str + i));
else
	_putchar(*(str + i + 1));
i++;
}
_putchar('\n');
}
