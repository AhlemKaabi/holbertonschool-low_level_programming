#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* sum_listint - function that rreturns the sum of
* all the data (n) of a listint_t linked list.
* @head: listint_t pointer to a list node.
* Return: sum.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
  /*while (head)*/ /*correct!*/
  /*while (head->next)*/ /*wrong!*/
	while (head != NULL) /*correct*/
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
