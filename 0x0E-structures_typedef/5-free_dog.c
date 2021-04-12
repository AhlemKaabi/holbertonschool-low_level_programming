#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - free memory dog
 * @d: pointer to structure dog
 * if an malloc is used to set one of the elements
 * we need to free that element
 * Return: Void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
