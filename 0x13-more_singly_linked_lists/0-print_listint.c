#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* print_listint - function that prints all the elements of a listint_t list
* @h: pointer to a node
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned long j;

	if (h == NULL)
		return (0);
	j = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
