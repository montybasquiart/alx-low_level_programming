#include "main.h"

/**
 * read_textfile - function read text file and prints it to output
 * @filename: file to be read
 * @letters: letters to read and print
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int posix;
	int i, err;
	char *bue;

	if (!filename)
		return (0);
	posix = open(filename, O_RDONLY);
	if (posix < 0)
		return (0);
	bue = malloc(sizeof(char) * letters);
	if (!bue)
		return (0);
	i = read(posix, bue, letters);
	if (i < 0)
	{
		free(bue);
		return (0);
	}
	bue[i] = '\0';
	close(posix);
	err = write(STDOUT_FILENO, bue, i);
	if (err < 0)
	{
		free(bue);
		return (0);
	}
	free(bue);
	return (err);
}
