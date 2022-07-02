#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - This function prints whether n is positive or not
 *
 *  Return: 0
 */
int main(void)
{
	int x;

	for (x = 0 + 48; x <= 9 + 48; x++)
	{
		putchar(x);
		if (x != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
