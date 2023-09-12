#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	/* Declare a variable and init it with the 1st member of range a-zA-Z */

	char alphabets;

	/**
	 * Check to see if the current value of assigned var is UPPERCASE LETTERS
	 * and same as the last letter (Z) of the given range
	 * While the value is true; print UPPERCASE & lowercase letters
	 */

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{

	/* Print the value of UPPERCASE LETTERS */

		putchar (alphabets);
	}

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{

	/* Print the value of lowercase */

		putchar(alphabets);
	}

	return (0);
}
