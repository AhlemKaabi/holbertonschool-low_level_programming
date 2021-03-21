#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: list_t pointer to a structure node
* @str: constant pointer to a string
* Return: the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int i, len = 0;
	list_t *new_node;

	/* -- duplicate the str in another string of type char * -- */
	s = strdup(str);
	/* -- calculate the length of the string -- */
	for (i = 0; *(str + i) != '\0'; i++)
	{
		len = i + 1;
	}
	/*-- create new node --*/
	new_node = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = s;
	new_node->len = len;
	new_node->next = NULL;
	/* -- add the new node at the end -- */
		/*check the head of the list*/
		/*we can not use the *curr pointer */
	if (*head == NULL)
	{
		*head = new_node;/*dereference the head of the list to the new node*/
	}
	else /*without else there is a problem with the compilator*/
	{
		while (curr->next != NULL)/*until we reach the end of the list*/
		{
			curr = curr->next;/*point to the next node*/
		}
		curr->next = new_node;
	}
	return (new_node);
}
