#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list,
 *@head: a pointer to the elements of a list
 *Return: 0 or head node
 */

int pop_listint(listint_t **head)
{
	int retval = -1;

	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;

	return (retval);
}
