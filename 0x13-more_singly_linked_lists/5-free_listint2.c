#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 -  frees a listint_t list
 *@head: a pointer to the elements of a list
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
		*head = NULL;
}
