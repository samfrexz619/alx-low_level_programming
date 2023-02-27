#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		count++;
	}
}

