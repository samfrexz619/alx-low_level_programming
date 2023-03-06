#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int index, n = 0;

	for (index = 0; index < 64; index++)
	{
		if (index % 8 == 0 && index != 0)
		{
			n = index;
			_putchar('\n');
		}
		_putchar(a[index / 8][index - n]);
	}
	_putchar('\n');
}
