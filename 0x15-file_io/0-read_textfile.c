#include "main.h"

/**
 * read_textfile - a function to read and print a txt file
 * @filename: the filename
 * @letters: the letters
 * Return: NUmber of letters or nothing
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd; 
	ssize_t state;
       	ssize_t	temp;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * letters);
	temp = read(fd, buf, letters);
	state = write(STDOUT_FILENO, buf, temp);

	free(buf);
	close(fd);
	return (state);	
}
