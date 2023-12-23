#include "main.h"

/**
 * create_file - a function that  creates a file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int empty, x, y = 0;

	if (!filename)
		return (-1);

	empty = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (empty < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(empty, text_content, y);
		if (x != y)
			return (-1);
	}

	close(empty);

	return (1);
}
