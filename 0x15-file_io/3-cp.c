#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: an array of arguments
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((r = read(from, buffer, 1024)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1 || to == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_file(from);
	close_file(to);
	return (0);
}

/**
 * close_file - Closes file descriptors.
 * @file: The file descriptor to be closed.
 */

void close_file(int file)
{
	int c;

	c = close(file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
