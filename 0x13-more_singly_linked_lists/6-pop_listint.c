#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* pop_listint - function that deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: listint_t pointer to a list node
*/
int pop_listint(listint_t **head)
{
	int elem = 0;
	listint_t *curr = *head;

	
	if (*head == NULL)
		return (0);
	curr->next->n = elem;
//	curr = curr->next;
//	*head = (*head)->next;/*change pointer (head) to the next node*/
	
	return (0);
}
//(*head)->n = elem;
	//elem = (*head)->n;