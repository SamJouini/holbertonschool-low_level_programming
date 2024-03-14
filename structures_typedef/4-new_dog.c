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

	if (name == NULL)
	{
		newName = NULL;
	}
	else
	{
		newName = malloc((_strlen(name) + 1) * sizeof(char));
		_strcpy(newName, name);
	}

	if (owner == NULL)
	{
		newOwner = NULL;
	}
	else
	{
		newOwner = malloc((_strlen(owner) + 1) * sizeof(char));
		_strcpy(newOwner, owner);
	}

	newDog = malloc(sizeof(dog_t));
	newDog->age = age;
	newDog->name = newName;
	newDog->owner = newOwner;

	return (newDog);

}
