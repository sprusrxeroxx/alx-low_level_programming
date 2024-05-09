#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
    size_t i, mid;
    int *ptr = array;

    if (!array)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", ptr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    mid = (size - 1) / 2;
    if (size == 1 && array[0] != value)
        return (-1);
    if (array[mid] == value)
    {
        if (array[mid - 1] < value)
            return (mid);
    }
    if (array[mid] < value)
    {
        ptr = &array[mid + 1];
        if (size % 2 != 0)
            mid--;
    }
    if (array[mid] >= value)
    {
        if (size % 2 != 0)
            mid++;
    }
    return (advanced_binary(ptr, size / 2, value) + (array[mid] < value ? mid + 1 : mid));
}