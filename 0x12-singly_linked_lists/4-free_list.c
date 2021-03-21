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
	list_t *curr = head;
	while(curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	head = NULL;
}
