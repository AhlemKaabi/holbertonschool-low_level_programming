#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* print_listint_safe - unction that prints a listint_t linked list
* with a loop.
* @head: listint_t pointer to a list node.
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	int check;
	size_t i;
	listint_t *S_ptr, *F_ptr, *temp;

	if (head == NULL)
	{
		return (0);
	}
	S_ptr = F_ptr = (void *)head;
	check = 0;
	while (F_ptr && F_ptr->next && F_ptr->next->next)
	{	S_ptr = S_ptr->next;
		F_ptr = F_ptr->next->next;
		if (S_ptr == F_ptr)
		{check = 1;
			break; } }
	F_ptr = temp = (void *)head;
	if (check == 1)
	{
		while (S_ptr != F_ptr)
		{	printf("[%p] %i\n", (void *)temp, temp->n);
			temp = temp->next;
			if (temp == S_ptr)
			{	S_ptr = S_ptr->next;
				F_ptr = F_ptr->next;
			}
			i++; }
		printf("[%p] %i\n", (void *)temp, temp->n);
		i++;
		printf("-> [%p] %i\n", (void *)S_ptr, S_ptr->n); }
	else
	{
		while (temp)
		{	printf("[%p] %i\n",  (void *)temp, temp->n);
			temp = temp->next;
			i++; }
	return (i);
}
