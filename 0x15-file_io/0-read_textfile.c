#include "main.h"

/**
 * read_textfile - a function to read and print a txt file
 * @filename: the filename
 * @letters: the letters
 * Return: NUmber of letters or nothing
 */

ssize_t_read_textfile(const char *filename, size_t letters)
{
	int file, len, i, res;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY)

		if (file == -1)
			return (0);

	buff = malloc(sizeof(char)*letters);
	if (!buff)
		return (0);

	read(file, buff, letters);
	buff[letters] - '\0';

	for (i = 0; buff[i] != '\0'; i += 1)
		len += 1;
}
