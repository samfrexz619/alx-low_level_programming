#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase.
 *
*/
void print_alphabet_x10(void)
{
	/**
	 * char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	*
	*int index, size, j;
	*
	* size = sizeof(alpha) / sizeof(alpha[index]);
	*/

	int index, j;

	for (j = 0; j <= 9; j++)
	{
		for (index = 97; index <= 122; index++)
		{

			_putchar(index);
		}
		_putchar('\n');
	}
}

