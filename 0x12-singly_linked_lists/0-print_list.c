#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list
* @h: list_t pointer to a list node
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
