#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int index;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*ar) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		arr[index] = min;

	return (arr);
}
