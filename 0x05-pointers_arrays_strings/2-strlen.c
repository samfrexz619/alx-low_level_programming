#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int string_counter = 0;

	while (*(s + string_counter) != '\0')
		string_counter++;
		return (string_counter);
	}
}
