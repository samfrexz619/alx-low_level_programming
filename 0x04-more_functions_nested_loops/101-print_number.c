#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int res, d, count;

	if (n < 0)
	{
		_putchar(45);
		res = n * -1;
	}
	else
	{
		res = n;
	}

	d = res;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((res / count) % 10) + 48);
	}
}
