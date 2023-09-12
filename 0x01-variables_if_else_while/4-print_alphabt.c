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

	char letters;

	/* Check to see if the current value of var prints all letters except 'q' and 'e' */

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')

	/* Print the value of letters without 'q' and 'e' */

			putchar(letters);
	}

	putchar('\n');

	return (0);
}
