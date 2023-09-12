#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always o (Success)
*/

int main(void)
{
	/* Declare a variable and initialize */

	int n;

	for (n = 0; n < 10; n++)
	{

	/* Print the value of n */

		putchar((n % 10) + '0');
	}

	putchar('\n');

	return (0);
}
