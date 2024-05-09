#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located
 */


listint_t *jump_list(listint_t *list, size_t size, int value)
{
    long unsigned int jump, i;
    listint_t *current, *prev;

    if (!list)
        return (NULL);

    jump = sqrt(size);
    current = list;
    prev = NULL;
    while (current->n < value)
    {
        prev = current;
        for (i = 0; current->next && i < jump; i++)
            current = current->next;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (!current->next)
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