#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line to be printed.
 * Return: no return.
 */
void print_line(int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
