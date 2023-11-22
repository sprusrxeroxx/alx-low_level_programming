#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: a pointer to the current element in the list
 *n: The address of an element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t * current = *head;
		listint_t * new;

		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		while (current-> next)
		current = current->next;

		current->next = new; 

		return (new);


}
