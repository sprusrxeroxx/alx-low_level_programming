#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_listint - finds sum of all data in list
 *@head: pointer to elemetns in list
 *Return: Sum of all elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i)
	{
		sum = sum + i->n;
		i = i->next;
	}
	return (sum);
}
