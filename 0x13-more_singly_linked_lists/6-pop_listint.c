#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* pop_listint - function that deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: listint_t pointer to a list node.
* Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	/*will replace the hread pointer that pointes to the first node */

	if (*head == NULL)/*check empty list -- our fist node is not empty*/
		return (0);
	temp = *head; /* take the same adress as head*/
	/*
	* the pointer temp take what [*head]
	* points to which is the desired first node to remove
	*/
	*head = (*head)->next;
	/*
	*change pointer (head) to the next node --
	*thus change the adress of the head pointer to the next node
	*/
	if (temp == NULL)
		return (0);
	else
		return ((temp)->n);
	return (0);
}
