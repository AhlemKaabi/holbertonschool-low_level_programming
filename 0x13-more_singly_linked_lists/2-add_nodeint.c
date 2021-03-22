#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - function that adds a new node
* at the beginning of a listint_t list.
* @head: list_t pointer to a list node
* @n: the content of the elements.
* Return: number of elemnets (nodes)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	/*create new node*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	/*add the new node*/
	*head = new_node;
	/*return*/
	return (new_node);
}
