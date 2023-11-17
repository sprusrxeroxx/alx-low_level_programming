#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free's a list
 * @head: head of list
 * Return: NULL
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

