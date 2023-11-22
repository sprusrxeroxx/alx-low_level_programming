#include "lists.h"

/**
 *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *@head: a pointer to a particular list
 *@index: the index of an element in a list
 *Return: nth node of list or 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *t = head;

	while (t && j < index)
	{
	t = t->next;
	j++;
	}

return (t ? t : NULL);
}
