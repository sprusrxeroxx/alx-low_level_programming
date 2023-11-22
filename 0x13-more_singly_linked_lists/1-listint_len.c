#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *listint_len -  returns the number of elements in a linked list
 *@h: a  pointer to a list element 
 *
 *Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h; 
	int cout = 0;

	while (current != NULL)
	{
		cout++;
		current = current->next;
	}

	return (cout);


}
