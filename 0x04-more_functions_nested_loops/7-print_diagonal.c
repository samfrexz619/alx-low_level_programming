#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int index, j;

	for (index = 0; index < n; index++)
	{
		for (j = 0; j < index; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (index < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
