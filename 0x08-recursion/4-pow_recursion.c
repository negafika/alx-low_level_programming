#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 * @x: the number to be raised
 * @y: the exponenet
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
return (x * _pow_recursion(x, y - 1));
}