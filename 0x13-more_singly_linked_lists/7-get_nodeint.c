#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - function that returns the nth node
* of a listint_t linked list.
* @head: listint_t pointer to a list node.
* @index: the index of the node.
* Return: a pointer to the indexed node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index && head->next != NULL; i++)
	{
		head = head->next;
	}
	/*
	*If position is more than number of nodes:
	*for loop reach the end of the list and i still < index
	*/
	if (i < index)
		return (NULL);
	return (head);
}
