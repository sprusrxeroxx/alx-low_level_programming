#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees the list of elements 
 * @head: a pointer to a list element 
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
