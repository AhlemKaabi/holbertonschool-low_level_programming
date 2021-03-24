#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* reverse_listint - function that ideletes the node
* at index index of a listint_t linked list.
* @head: listint_t pointer to a list node.
* Return: a pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Previous_node = NULL;
	listint_t *Next_node = NULL;

	if (head == NULL)
		return (NULL);
/*the idea is to change the head pointer, until the end of the list*/
	while (*head != NULL)
	{
		Next_node = (*head)->next; /*select the next node*/
		(*head)->next = Previous_node; /*reverse the pointer*/
		Previous_node = *head; /*preavious node will take the place of the head*/
		*head = Next_node; /*change the head to the next node*/
	}
	*head = Previous_node;
	return (*head);
}
