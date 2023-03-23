#include "variadic_functions.h"

/**
 * print_numbers - prints nums.
 * @separator: string to be printed between nums.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && index < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
