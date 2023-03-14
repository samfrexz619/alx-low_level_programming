#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arr of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr[index] = c;

	return (ptr);
}
