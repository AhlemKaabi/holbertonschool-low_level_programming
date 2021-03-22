#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* listint_len - function that returns the number of element in a linked list.
* @h: list_t pointer to a list node
* Return: number of elemnets (nodes)
*/
size_t listint_len(const listint_t *h)
{
	unsigned long i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
