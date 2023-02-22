#include <stdio.h>

/**
 * main - Prints the Fibonacci sequence.
 *
 * Return: Always 0.
 */
int main(void)
{
	int index = 0;

	long int fib, num1, num2;

	num1 = 1;

	num2 = 2;

	printf("%ld, %ld", num1, num2);

	while (index < 48)
	{
		fib = num1 + num2;

		printf(", %ld", fib);

		num1 = num2;

		num2 = fib;

		index++;
	}
	printf("\n");
	return (0);
}
