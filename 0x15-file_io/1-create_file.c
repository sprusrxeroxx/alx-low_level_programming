#include "main.h"

/**
 * create_file - creates a file
 * @filename: a fileame
 * @text_content: a string
 * Return: 1 0r -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
