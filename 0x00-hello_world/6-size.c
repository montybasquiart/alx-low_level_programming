#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

/* define variables */

	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

/**
 * sizeof evaluates the size of a variable
 * prints the size of char, int, double, long int, long long int, and float
 * %zu - format for (z)length modifier and (u)unsigned type
 */
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
