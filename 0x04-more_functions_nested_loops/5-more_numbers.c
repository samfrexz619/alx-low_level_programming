#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int index, count;

	count = 0;

	while (count < 10)
	{
		index = 0;

		while (index < 15)
		{
			if (index >= 10)
				_putchar((index / 10) + 48);
				_putchar((index % 10) + 48);

				index++;
			}
		_putchar('\n');
		count++;
	}
}
