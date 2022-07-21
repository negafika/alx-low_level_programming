#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: the input string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s == "")
	{
	return (0);
	}
	else if (*(s + 1))
	{
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
