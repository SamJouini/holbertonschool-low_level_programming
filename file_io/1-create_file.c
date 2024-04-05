#include "main.h"

/**
 * _strlen - return the length of a string
 * @s : string to mesure
 * Return: I, the index
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	__ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}
