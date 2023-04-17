#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 *
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 *
 * Return: pointer to new allocated memory for dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, nl, ol;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->age = age;

	i = nl = ol = 0;
	while (*(name + nl++));
	d->name = malloc(sizeof(d->name) * nl);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	while (*(name + i))
		d->name[i] = *(name + i), i++;

	while (*(owner + ol++));
	d->owner = malloc(sizeof(d->owner) * ol);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	i = 0;
	while (*(owner + i))
		d->owner[i] = *(owner + i), i++;

	return (d);
}
