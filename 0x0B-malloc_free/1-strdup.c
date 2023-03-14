#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int index, j;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
		;

	strout = (char *)malloc(sizeof(char) * (index + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= index; j++)
		strout[j] = str[j];

	return (strout);
}
