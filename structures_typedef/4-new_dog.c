#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a sting
 * @s : string
 * Return: i
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
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _mallocpy - allocate space and copy in it
 * @str: string to copy
 * Return: pointer to copied string
*/

char *_mallocpy(char *str)
{

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *newstr;
		newstr = malloc((_strlen(str) + 1) * sizeof(char));
		if (newstr == NULL)
		{
			return (NULL);
		}
		_strcpy(newstr, str);
		return (newstr);
	}
}

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: newDog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	dog_t *newDog;

	newName = _mallocpy(name);
	newOwner = _mallocpy(owner);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL || newName == NULL || newOwner == NULL)
	{
		free(newDog);
		free(newName);
		free(newOwner);
		return (NULL);
	}

	newDog->age = age;
	newDog->name = newName;
	newDog->owner = newOwner;

	return (newDog);
}
