#include "search_algos.h"

/**
 * linear_search - searches for a value
 * @array: input array
 * @size: array size
 * @value: value to search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
