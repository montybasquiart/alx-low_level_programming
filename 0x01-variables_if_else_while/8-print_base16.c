#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	char alphabets;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
