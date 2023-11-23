#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *insert_nodeint -  inserts a new node at a given position
 *@head: pointer to first element in list
 *@idx: index of an element in list
 *@n: number
 *Return: address of new pointer or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));


	if (!new ||!head)
	return (NULL);

	new->n = n;
	new
