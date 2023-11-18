#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: 1st parameter, argc (argument count), no of command line arguments
 * @argv: 2nd parameter, argv (argument vector), array that contains the arg
 * Return: (0) when successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
