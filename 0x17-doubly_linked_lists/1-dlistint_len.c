#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned long int i = 0;

	current = h;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
