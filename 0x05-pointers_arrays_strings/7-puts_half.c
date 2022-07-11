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
while (i < (len / 2))
{
_putchar(*(str + len - 1 - i));
i++;
}

}
