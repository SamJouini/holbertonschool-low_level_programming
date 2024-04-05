#include "main.h"
#include <stdio.h>

/**
 * main - copy the contents of one file to another
 * @argc: the number of arguments
 * @argv: the arguments given to the programm
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_source = 0;
	int file_dir = 0;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_source = open(argv[1], O_RDONLY);
	if (file_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_dir = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_dir == -1)
	{
		close(file_source);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(file_source, buffer, 1024)) > 0)
	{
		bytes_written = write(file_dir, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(file_source);
			close(file_dir);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		close(file_source);
		close(file_dir);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_source) == -1)
	{
		close(file_dir);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}

	if (close(file_dir) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dir);
		exit(100);
	}

	return (0);
}
