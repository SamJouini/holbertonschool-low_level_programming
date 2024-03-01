#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z'
				&& (i == 0
					|| str[i - 1] == ' '
					|| str[i - 1] == '\t'
					|| str[i - 1] == '\n'
					|| str[i - 1] == ','
					|| str[i - 1] == ';'
					|| str[i - 1] == '.'
					|| str[i - 1] == '!'
					|| str[i - 1] == '?'
					|| str[i - 1] == '"'
					|| str[i - 1] == '('
					|| str[i - 1] == ')'
					|| str[i - 1] == '{'
					|| str[i - 1] == '}'
				   )
		  )
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
