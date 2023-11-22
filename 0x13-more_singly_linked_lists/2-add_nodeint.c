#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *listint_t *add_nodeint - adds a new node at the beginning of a list
 *@head: a pointer to an element in a list
 *@n: new element iin a list
 *Return: Null or address in a new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);


	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
