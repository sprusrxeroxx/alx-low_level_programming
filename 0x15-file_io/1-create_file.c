#include "main.h"

/**
 * create_file - creates a file
 * @filename: a fileame
 * @text_content: a string 
 * Return: 1 0r -1
 */

int create_file(const char *filename, char *text_content)
{
	int f, cout = 0, res = 1;

	if (!filename)
		return (-1);

	f = open(filename,O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		while(text_content[cout])
		cout++;
		res = write(f, text_content, cout);
	}
	if (res == -1)
	{
		return (-1);
	}
		close(f);
		return (1);
}
