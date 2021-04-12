#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _getlength - allocate memory and add
 * @str: str
 * Return: int
 * this _getlength doesn't count the null byte
 **/
int _getlength(char *str)
{
	int  i;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
/**
 * new_dog - copy to new dog struct
 * @name: name element
 * @age: age element
 * @owner: owner element
 * Return: Void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len, i;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (age)
		p->age = age;
	if (name && owner)
	{
		len = _getlength(name);
		/* +1 to add the null byte */
		p->name = malloc((len + 1) * sizeof(char));
		if (p->name == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < len; i++)
			p->name[i] = name[i];
		p->name[len] = '\0';

		len = _getlength(owner);
		p->owner = malloc((len + 1) * sizeof(char));
		if (p->owner == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}
		for (i = 0; i < len; i++)
			p->owner[i] = owner[i];
		p->owner[len] = '\0';
	}
	else
		return (NULL);
	return (p);
}
