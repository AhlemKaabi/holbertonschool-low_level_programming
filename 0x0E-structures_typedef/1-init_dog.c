#include <stddef.h>
#include "dog.h"
/**
* init_dog - function that initializes a variable of type struct dog
*@d: the initialization
*@name: the initialized name
*@age: the initialized age
*@owner: the initialized owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
