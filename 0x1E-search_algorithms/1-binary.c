#include "search_algos.h"

/**
 * recursive_s - searches for a value
 * @array: input array
 * @size: array size
 * @value: value to search
 * Return: index
 */
int recursive_s(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t idx;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (idx = 0; idx < size; idx++)
		printf("%s %d", (idx == 0) ? ":" : ",", array[idx]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursive_s(array, mid, value));

	mid++;

	return (recursive_s(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - binary_search
 * @array: input array
 * @size: array size
 * @value: value to search
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_s(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
