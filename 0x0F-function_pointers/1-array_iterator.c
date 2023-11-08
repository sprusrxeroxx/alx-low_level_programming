#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: An array to store function
 * @size: size of the array
 * @action: A function pointer
 * Return: Nothing or 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

