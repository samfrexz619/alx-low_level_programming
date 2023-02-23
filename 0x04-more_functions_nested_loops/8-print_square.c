#include "main.h"
/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int index, j;

	for (index = 0; index < size; index++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (index != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
