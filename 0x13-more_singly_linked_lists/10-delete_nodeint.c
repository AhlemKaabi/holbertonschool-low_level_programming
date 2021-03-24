#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index - function that ideletes the node
* at index index of a listint_t linked list.
* @head: listint_t pointer to a list node.
* @index: the index of the node.
* Return: a pointer to the indexed node.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *store_next;
unsigned int i;

/* If linked list is empty */
if (*head == NULL)
	return (-1);

/* Store head node */
temp = *head;

/* If head needs to be removed */
if (index == 0)
{
	*head = temp->next;   /* Change head */
	free(temp);           /* free old head */
	return (1);
}

/* Find previous node of the node to be deleted*/
for (i = 0; ((temp != NULL) && (i < (index - 1))); i++)
	temp = temp->next;

/* If position is more than number of nodes*/
if ((temp == NULL) || (temp->next == NULL))
	return (-1);

/* Node temp->next (that temp-> pointes to)is the node to be deleted */
/* Store pointer to the next of node to be deleted (so we do not loose the link to the rest of the node)*/
store_next = (temp->next)->next;

/* Unlink the node from linked list */
free(temp->next);  /* Free memory */

temp->next = store_next;  /* Unlink the deleted node from list = link the previous with the next node*/
return (1);
}
