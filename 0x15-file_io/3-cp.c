#include "main.h"
#define BUF_SIZE 1024

/**
 * main - main funct
 * @argv: array argument pointer
 * @argc: argument counter
 * Return:0
 */

void error_99(int f0, char *buffer, char *argv);
void error_98(int f0, char *buffer, char *argv);
void error_100(int f0, char *buffer);

int main(int argc, char **argv)
{
	int f0, f1, res0, res1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file from file to \n");
		exit(97);
	}

	buffer = malloc(sizeof(char)*BUF_SIZE);
	if (!buffer)
		return (0);

	f1 = open(argv[1], O_RDONLY);
	error_98(f1, buffer, argv[1]);
	f0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(f0, buffer, argv[2]);

	do
	{
		res0 = read(f1, buffer, BUF_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffer, argv[1]);
		res1 = write(f0, buffer, res0);
		error_99(res1, buffer, argv[2]);
	}
	while (res0 > 0);

		res0 = close(f1);
		free(buffer);
		return (0);
}

/**
 * error_98 - checks for error
 * @buffer: a buffer
 * @argv: argument value
 * @f0: value
 */

void error_98(int f0, char *buffer, char *argv)

{
	if (f0 < 0) {
	dprintf(STDERR_FILENO, "Error; can't read from file %s\n", argv);
	free(buffer);
	exit(98);
	}
}

/**
 * error_99 - checks for error
 * @buffer: a buffer
 * @argv: argument value
 * @f0: value
 */

void error_99(int f0, char *buffer, char *argv)
{
        if (f0 < 0)
        {
                dprintf(STDERR_FILENO, "Error; can't write to %s\n", argv);
                free(buffer);
                exit(99);
        }
}

/**
 * error_100 - checks for error
 * @buffer: a buffer
 * @argv: argument value
 * @f0: value
 */

void error_100(int f0, char *buffer)
{
        if (f0 < 0)
        {
                dprintf(STDERR_FILENO, "Error; can't close fd %i\n", f0);
                free(buffer);
                exit(100);
        }
}
