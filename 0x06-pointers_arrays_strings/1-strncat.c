#include "main.h"
#include <stdio.h>

/**
 * _strncat - performs concatenation
 * @dest: the destination string
 * @src: the source one
 * @n: to where it goes
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int len_dest;
int i;

len_dest = 0;
i = 0;
while (*(dest + len_dest) != '\0')
	len_dest++;
while (i < n)
{
	*(dest + len_dest + i) = *(src + i);
	i++;
}

return (dest)
}
