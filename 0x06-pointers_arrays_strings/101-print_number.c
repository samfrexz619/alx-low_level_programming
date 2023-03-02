#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int i, b, len;

	if (n < 0)
	{
		_putchar(45);

		i = n * -1;
	}
	else
	{
		i = n;
	}

	b = i;
	len = 1;

	while (b > 9)
	{
		b /= 10;
   		 len *= 10;
	}
	for (; len >= 1; len /= 10)
	{
		_putchar(((i / len) % 10) + 48);
	}
