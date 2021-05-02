#include "lists.h"
/**
 * create_new_node - function that creates a new node
 * @n: node data
 * Return: a pointer to the new node created.
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
* add_dnodeint - function that adds a new node at the beginning
* @head: pointer to the head node
* @n: new integer node
* Return: pointer to the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* new node */
	new = create_new_node(n);
	if (new == NULL)
	{
		return (NULL);
	}
	/* add the new node created at the beginning */
	new->next = *head;
	*head = new;

	return (new);
}
