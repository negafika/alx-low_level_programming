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
int i;
int temp;

len = 0;
while (*(s + len) != '\0')
	len++;
i = 0;
while (i < (len / 2))
{
temp = *(s + i);
*(s + i) = *(s + len - 1 - i);
*(s + len - 1 - i) = temp;
i++;
}

}
