#include <stdio.h>

/**
 * main - print it's name, followed by a new line
 * @argc: 1st parameter, argc (argument count), no of command line arguments
 * @argv: 2nd parameter, argv (argument vector), array that contains the arg
 * Return: (0) when successful
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
