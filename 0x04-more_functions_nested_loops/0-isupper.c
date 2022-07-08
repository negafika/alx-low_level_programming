#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the case of the character.
 * @c: character to check.
 *
 * Return: gives 0 or 1.
 */
int _isupper(int c)
{
	if (c/97 == 0)
	{
		return(1);
	}
	else if (c/97 == 1)
	{
		return(0);
	}
}
