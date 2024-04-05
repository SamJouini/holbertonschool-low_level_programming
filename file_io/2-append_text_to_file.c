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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
		int file;
		ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
			close(file);
			return (-1);
	}

	bytes_written = write(file, text_content, _strlen(text_content));
	
	if (bytes_written == -1 || bytes_written != _strlen(text_content))
		{
			close(file);
			return (-1);
		}

	close(file);
	return (1);
}
