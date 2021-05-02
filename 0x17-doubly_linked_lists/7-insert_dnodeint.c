#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: pointer to the first node of a list.
 * @idx: index of the liwt where the nexw node should bi inserted.
 * @n: the data of the node.
 * Return: the adress of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new_node;
	unsigned int list_len, step;

	if (h == NULL)
		return (NULL);
	aux = *h;
	list_len = 0;
	while (aux != NULL)
	{
		list_len++;
		aux = aux->next;
	}
	aux = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == list_len - 1)
		return (add_dnodeint_end(h, n));
	else if (idx > 0 && idx < list_len)
	{
		step = 0;
		while (step != idx)
		{
			aux = aux->next;
			step++;
		}
		new_node = create_new_node(n);
		aux->prev->next = new_node;
		new_node->next = aux;
		new_node->prev = aux->prev;
		aux->prev = new_node;

	}
	else
		return (NULL);
	return (new_node);
}
