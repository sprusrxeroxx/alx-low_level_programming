#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *prev;

    if (!list)
        return (NULL);

    current = list;
    while (current)
    {
        prev = current;
        if (current->express)
            current = current->express;
        else
        {
            while (current->next)
                current = current->next;
            break;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    for (; prev && prev->index <= current->index; prev = prev->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
    }
    return (NULL);
}