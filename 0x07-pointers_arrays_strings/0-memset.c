#include "main.h"
/**
 * _memset - fills memomry with a const byte
 * @s: mem area.
 * @b: const byte.
 * @n: bytes filled.
 * Return: the pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
