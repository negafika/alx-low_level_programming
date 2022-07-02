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

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' || x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
