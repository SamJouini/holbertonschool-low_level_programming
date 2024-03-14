#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of struct dog
 * @d: structure for dog's ID
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
