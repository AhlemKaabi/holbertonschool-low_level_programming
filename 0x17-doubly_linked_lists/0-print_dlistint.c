#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the first node.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	while (h != NULL)
	{
		i++;
		printf("%d\n", current->n);
		h = h->next;
	}
	return (i);
}
