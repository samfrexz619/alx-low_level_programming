#include "main.h"
/**
 * set_bit - sets the val of bit to 1
 * @n: pointer of an unsigned long int
 * @index: index
 * Return: 1 if successful and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);

	val = 1 << index;

	*n = (*n | val);

	return (1);
}
