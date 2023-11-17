#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - counts number of elements in list
 * @h: a linked list
 * Return: element count of list
 */

size_t list_len(const list_t *h)
{
	size_t cout = 0;

	while (h)
	{
	h = h->next;
	cout++;
	}
	

	return (cout);
}

