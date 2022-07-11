#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: a ponter to an integer var
 * @b: a poniter to another integer var
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
*b = *a + *b;
*a = *b - *a;
*b = *b - *a;
}
