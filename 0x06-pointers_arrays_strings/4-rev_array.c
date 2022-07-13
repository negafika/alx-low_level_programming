#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the length of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;

for (i = 0 ; i < (n / 2) ; i++)
{
a[n - 1 - i] += a[i];
a[i] = a[n - 1 - i] - a[i];
a[n -1 - i] -= a[i];
}
}
