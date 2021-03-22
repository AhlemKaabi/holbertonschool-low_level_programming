#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - function that adds a new node
* at the end of a listint_t list.
* @head: list_t pointer to a list node
* @n: the content of the elements.
* Return: number of elemnets (nodes)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	/*create new node*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/*add the new node at the end of the list*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (curr->next != NULL)/*until last node(null)*/
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	return (new_node);
}
