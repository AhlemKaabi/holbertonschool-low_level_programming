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
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
