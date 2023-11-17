#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 * except 2 and 4
 */

void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb != 2 && numb != 4)
		{
			_putchar(numb + '0');
		}
	}
	_putchar('\n');
}
