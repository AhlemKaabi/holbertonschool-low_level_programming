#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* new_dog - function that creates new dog
* @name: is the new name
* @age: is the new age
* @owner: is the new owner
* Return: a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *N = malloc(sizeof(dog_t));

	if (N != NULL)
	{
		N->name = name;
		N->age = age;
		N->owner = owner;
		return (N);
	}
	else
		return (NULL);
}
