#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
int len;

len = 0;
while (*(s + 1) != '\0')
	len++;
char str[len];
int i;

i = len;
while (i--)
{
str[i] = *(s + len - i); 
}
while (i <= len)
	*(s + i) = str[i];
}
