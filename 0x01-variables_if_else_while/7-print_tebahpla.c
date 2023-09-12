#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	/* Declare a variable and initialize */

	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
	/* Print the value of alphabets */
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
