#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index, b;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + index) == *(accept + b))
				return (s + index);
		}
	}
	return ('\0');
}
