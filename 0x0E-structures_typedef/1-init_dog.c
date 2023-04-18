#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initializes a var of type struct dog.
  * @d: ptr to structure.
  * @name: 1st member
  * @age: 2nd member
  * @owner: 3rd mbr
  *
  * Return: void.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
