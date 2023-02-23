#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int index, j;

	for (index = 0; index < size; index++)
	{
		for (j = 1; j < (size - index); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (index < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
