#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prinyts eah array elem on a new line
 * @array: does stuff
 * @size: how many elements to include
 * @action: pionters to print in a regular or hex
 * Return: void
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
