#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - function that creates new dog
* @name: is the new name
* @age: is the new age
* @owner: is the new owner
* Return: a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *cpy_name, *cpy_owner;
	dog_t *N;

	cpy_name = malloc(sizeof(name + 1));
	if (cpy_name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
		cpy_name[i] = name[i];
	}
	cpy_name = '\0';
	cpy_owner = malloc(sizeof(owner + 1));
	if (cpy_owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
	{
		cpy_owner[i] = owner[i];
	}
	cpy_owner = '\0';
	N = malloc(sizeof(dog_t));
	if (N == NULL)
	{
		free(cpy_name);
		free(cpy_owner);
		free(N);
		return (NULL);
	}
	N->name = cpy_name;
	N->age = age;
	N->owner = cpy_owner;
	return (N);
}
