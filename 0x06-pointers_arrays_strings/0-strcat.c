#include "main.h"
#include <stdio.h>

/**
 * _strcat - performs concatenation
 * @dest: the destination string
 * @src: the source one
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int i;
int len_dest;

i = 0;
len_dest = 0;
while (*(dest + len_dest) != '\0')
	len_dest++;
while (*(src + i) != '\0')
{
	*(dest + len_dest + i) = *(src + i);
	i++;
}

return (dest)
}
