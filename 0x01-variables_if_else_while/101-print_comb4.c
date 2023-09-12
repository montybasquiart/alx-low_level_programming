#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int digit_01, digit_02, digit_03;

	for (digit_01 = 0; digit_01 < 8; digit_01++)
	{
		for (digit_02 = digit_01 + 1; digit_02 < 9; digit_02++)
		{
			for (digit_03 = digit_02 + 1; digit_03 < 10; digit_03++)
			{
				putchar((digit_01 % 10) + '0');
				putchar((digit_02 % 10) + '0');
				putchar((digit_03 % 10) + '0');

				if (digit_01 == 7 && digit_02 == 8 && digit_03 == 9)
				{	continue;

						putchar(',');
				}		putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
