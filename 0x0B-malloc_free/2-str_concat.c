#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = 0;

	while (s1[a] != '\0')
		a++;

	b = 0;

	while (s2[b] != '\0')
		b++;

	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	c = 0;
	while (c < a)
	{
		ptr[c] = s1[c];
		c++;
	}
	d = b;

	for (b = 0; b <= d; c++, b++)
		ptr[c] = s2[b];

	return (ptr);
}
