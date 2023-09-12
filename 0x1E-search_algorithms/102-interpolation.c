#include "search_algos.h"

/**
 * interpolation_search - searches for a value
 * @array: input array
 * @size: array size
 * @value: value to search
 * Return: Index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, lw, high;
	double fl;

	if (array == NULL)
		return (-1);

	lw = 0;
	high = size - 1;

	while (size)
	{
		fl = (double)(high - lw) / (array[high] - array[lw]) * (value - array[lw]);
		pos = (size_t)(lw + fl);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			lw = pos + 1;
		else
			high = pos - 1;

		if (lw == high)
			break;
	}

	return (-1);
}
