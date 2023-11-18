#include "main.h"
#include <stdio.h>

/**
 * main - print it's name, followed by a new line
 * @argc: 1st parameter, argc (argument count), no of command line arguments
 * @argv: 2nd parameter, argv (argument vector), array that contains the arg
 * Return: (0) when successful
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
