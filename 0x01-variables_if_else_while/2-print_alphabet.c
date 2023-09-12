#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	/* Declare a var and init it with the 1st member of the range [a-z] */

	char alphabets = 'a';

	/**
	 * Check to see if the current value of your variable is less than
	 * or the same as the last member (z) of the given range.
	 * While the value is less, go ahead and print the value
	 */

	while (alphabets <= 'z')
	{
	/* print the value of the variable */

	putchar(alphabets);

	/*increement var i.e, a becomes b, and so on, until a meets condition*/

	alphabets++;

	}

	putchar('\n');

	return (0);
}
