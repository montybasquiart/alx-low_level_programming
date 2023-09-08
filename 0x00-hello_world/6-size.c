#include <stdio.h>

/**
 * main - Entry point
 *
 * Descr: 'a C program that prints the size of various types on the computer'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

/* defining variables */

	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;

/**
 * sizeof: evaluates the size of a variable
 * printf: printsthe size of char, int, double, long int, long long int, and float
 * %zu: format for (z)length modifier and (u)unsigned type
 */
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
