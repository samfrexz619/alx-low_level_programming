#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * c: The alphabet in ASCII code
 *
 * Return: 1 for lowercase alphabets. 0 for the rest.
 */

int is_lower(int c)
{
if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
