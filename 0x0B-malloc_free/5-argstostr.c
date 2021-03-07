#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* argstostr - function that concatenates
* all the arguments of your program.
* @ac: the number of arguments 
* @av: array of the arguments content
*/
char *argstostr(int ac, char **av)
{
	int i, j, x, h, l,length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return(NULL);
	}
	for (h = 0; h <= ac; h++)
	{
		for (l = 0; av[h][l] != '\0'; l++)
		{
			length++;
		}
	}
	printf("length: %d", length);
	str = malloc((length + ac + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	x = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[x] = av[i][j];
			x++;
		}
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';
	return (str);
}
