#include "main.h"
/**
 * clear_bit - sets the val of bit to 0
 * @n: pointer of unsigned long int
 * @index: index
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);

	val = 1 << index;

	if (*n & val)
		*n ^= val;

	return (1);
}
