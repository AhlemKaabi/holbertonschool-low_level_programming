#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the first node
 * Return: the sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	long int sum = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
