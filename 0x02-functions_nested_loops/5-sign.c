#include "main.h"
/**
 * print_sign - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @n: The signs in ASCII code
 *
 * Return: 1 for lowercase alphabets. 0 for the rest.
 */
int  print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
