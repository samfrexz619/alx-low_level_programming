#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase.
 *
*/
void print_alphabet(void)
{
	int index = 97;

	while (index <= 122)
	{
		_putchar(index);
		index++;
	}
	_putchar('\n');
}
