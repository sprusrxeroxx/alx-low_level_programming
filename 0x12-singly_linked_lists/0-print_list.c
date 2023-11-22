#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints ll elements in a list
 * @h: an element in a list
 * Return: The number of nodes
 */

/*PRINT FUNCTION*/
size_t print_list(const list_t *h)
{
	size_t cout = 0;
	const list_t *current_node = h;

	while (current_node)
	{
	if (current_node->str == NULL)
		printf("[0] (nil)\n");

		else
		printf("[%d] %s\n", current_node->len, current_node->str);

	cout++;
	current_node = current_node->next;
	}
	return (cout);
}
