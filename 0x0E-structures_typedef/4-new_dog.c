#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to the new dog
 * If function fails, returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_dog;
	int i, lname, lowner;

	d_dog = malloc(sizeof(*d_dog));
	if (d_dog == NULL || name == NULL || owner == NULL)
	{
		free(d_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	d_dog->name = malloc(lname + 1);
	d_dog->owner = malloc(lowner + 1);

	if (d_dog->name == NULL || d_dog->owner == NULL)
	{
		free(d_dog->owner);
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		d_dog->name[i] = name[i];
	d_dog->name[i] = '\0';

	d_dog->age = age;

	for (i = 0; i < lowner; i++)
		d_dog->owner[i] = owner[i];
	d_dog->owner[i] = '\0';

	return (d_dog);
}
