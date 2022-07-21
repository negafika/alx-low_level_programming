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
	if (*s)
	{
		len += _strlen_recursion(s + 1);
	}
	else
		return (len);
}
