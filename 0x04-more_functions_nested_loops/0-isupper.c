#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the case of the character.
 * main - prints the output.
 *
 * Return: Always 0.
 */
_isupper(letter)
{
	if(letter/97 == 0)
	{
		return(1);
	}
	else if(letter/97 == 1)
	{
		return(0);
	}
}
