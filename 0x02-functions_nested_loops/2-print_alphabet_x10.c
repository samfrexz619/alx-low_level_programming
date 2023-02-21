#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase.
 *
*/
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int index, size, j;

	size = sizeof(alpha) / sizeof(alpha[index]);

	for (j = 0; j < 10; j++)
	{
		for (index = 0; index < size; index++)
		{

			_putchar(alpha[index]);
		}
		_putchar('\n');
	}
}

