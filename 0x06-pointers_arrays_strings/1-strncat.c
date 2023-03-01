#include "main.h"
#include <string.hi>
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)

		dest[dest_len + index] = src[index];
		dest[dest_len + index] = '\0';

		return (dest);
}
