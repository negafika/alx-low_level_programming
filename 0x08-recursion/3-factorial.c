#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: an integer input
 *
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));

}
