#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase.
 *
*/
void print_alphabet(void)
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

