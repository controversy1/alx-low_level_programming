#include <stdlib.h>
#include "main.h"
/**
 * array_range - craetes an array of intergers
 * @min: minin=mum rane of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
