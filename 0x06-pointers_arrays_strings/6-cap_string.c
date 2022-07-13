#include "main.h"

/**
 * cap_string - converts to uppercase
 * @str: to be passed
 *
 * Return: char
 */
char cap_string(char *str)
{
int i;

i = 0;
while (str[i] != '\0'&& str[i] > 96 && str[i] < 123)
{
str[i] = str[i] - 32;
}

return (str);
}
