#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* free_list - function that  frees a list_t list.
* @head: list_t pointer to a structure node
*/
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head; /*initialize the aux pointer to the next node*/
		head = head->next; /*point to the next node*/
		free(aux->str);/*free the content of the node*/
		/*free(aux->len); -- free the content of the node*/
		free(aux);/*destroy the pointer*/
	}
	head = NULL;
	free(head);
}
