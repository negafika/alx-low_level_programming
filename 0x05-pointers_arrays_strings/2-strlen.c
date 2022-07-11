#include "main.h"
#include <stdio.h>

/**
 *_strlen - check out the code
 *@s: a string to determine it's length
 *
 * Return: int
 */
int _strlen(char *s)
{
int len;

len = 0;
while(*(s+len) != '\0'){
len++;
}
return (len);
}
