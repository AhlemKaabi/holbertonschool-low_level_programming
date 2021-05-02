#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 *@head: pointer to the first node of the list.
 *@index: the index of the node.
 * Return: pointer to the new node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	node = head;
	i = 0;
	while (node != NULL)
	{
			if (i == index)
		{
			return (node);
		}
		if (i < index)
		{
			node = node->next;
			i++;
		}
	}
	return (NULL);
}
