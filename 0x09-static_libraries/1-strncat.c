#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, count;

	length = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}

	for (count = 0; count < n && src[count] != '\0'; count++, length++)
	{
		*(dest + length) = *(src + count);
	}

	*(dest + length) = '\0';

	return (dest);
}
