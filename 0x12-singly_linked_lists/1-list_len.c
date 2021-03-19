#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - function returns the number of elements in a linked list_t list
* @h: list_t pointer to a list node
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
