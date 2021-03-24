#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - function that insert a node at index.
* @head: listint_t pointer to a list node.
* @idx: the index of the node.
* @n: the added value of the new node.
* Return: a pointer to the indexed node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *store_next, *curr = *head;
	listint_t *new_node  = malloc(sizeof(listint_t));
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL || idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		/*add the new node*/
		*head = new_node;
		return (new_node);
	}
	i = 0;
	while (i < (idx - 1) && curr->next != NULL)
	{
		curr = curr->next;/*get to the index*/
		i++;
	}
	if (i < idx - 1)/*index outside the list*/
		return (NULL);
	store_next = curr->next;/*sotore the adress of the next node*/
	curr->next = new_node;/*the current node points to the new node */
	/* --create new node-- */
	new_node->n = n;
	new_node->next = store_next;/*link the new node to the next node*/
	return (new_node);
}
