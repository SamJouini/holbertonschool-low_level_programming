#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name to the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0 if failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fileContent;
	int file = 0;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fileContent = malloc(sizeof(char) * (letters + 1));
	if (fileContent == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(fileContent);
		return (0);
	}

	ssize_t bytes_read = read(file, fileContent, letters);

	if (bytes_read == -1)
	{
		free(fileContent);
		close(file);
		return (0);
	}
	fileContent[bytes_read] = '\0';

	ssize_t bytes_written = write(STDOUT_FILENO, fileContent, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(fileContent);
		close(file);
		return (0);
	}

	free(fileContent);
	close(file);
	return (bytes_read);
}
