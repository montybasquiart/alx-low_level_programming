#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 for success. -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	append = open(filename, O_WRONLY | O_APPEND);

	if (append == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(append, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(append);

	return (1);
}
