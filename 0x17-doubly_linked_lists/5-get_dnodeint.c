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
	for (i = 0; i < index && head->next; i++)
	{
		head = head->next;
	}
	if (i < index)
		return (NULL);
	return (head);
}
