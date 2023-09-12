#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	/* Declare variable and initialize */

	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
	
		continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
