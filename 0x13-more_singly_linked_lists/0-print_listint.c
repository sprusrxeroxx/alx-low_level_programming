#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints out all the elements in a list
 * @h: pointer to any list member
 * Return: Number of nodes or NULL
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int cout = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		cout++;
	}
	return (cout);
}
