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
if (len % 2 == 0)
{
for (i = len / 2 ; i < len ; i++)	
	_putchar(*(str + i));
}
else
{
for (i = (len / 2) + 1 ; i < len ; i++)
	_putchar(*(str + i));
}
_putchar('\n');
}
