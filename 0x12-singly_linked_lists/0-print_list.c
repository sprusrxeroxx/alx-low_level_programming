#include <stdlib.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
/*NODE STRUCTURE*/
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
/**
 * size_t print_list - function that prints ll elements in a list 
 * @h: an element in a list
 * Return: The number of nodes
 */

/*PRINT FUNCTION*/
int print_list(const list_t *h)
{
    list_t *current_node = head;
   	while ( current_node != NULL) 
	{
        	printf("%s ", current_node->str);
        	current_node = current_node->next;
		len++;
    	}
	return (len);
}

