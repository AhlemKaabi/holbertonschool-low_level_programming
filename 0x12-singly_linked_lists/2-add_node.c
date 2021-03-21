#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node - function that adds a new node at the beginning
* @head: list_t pointer to a structure node
* @str: constant pointer to a string
* Return: the new added node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int i, len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	/* -- duplicate the str in another string of type char * -- */
	s = strdup(str);
	/* -- calculate the length of the string -- */
	for (i = 0; *(str + i) != '\0'; i++)
	{
		len = i + 1;
	}
	/*-- create the new node --*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = s;
	new_node->len = len;
	new_node->next = *head; /*dereference to the rest of the list*/
	*head = new_node; /*change the head pointer to points to the new node*/
	return (new_node);
}
