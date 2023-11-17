#include <stdlib.h>
#include <strings.h>
#include "lists.h"

/**
 * add_node -...
 * @head:...
 * @str: ...
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
