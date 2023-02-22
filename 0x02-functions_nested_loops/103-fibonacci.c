#include <stdio.h>

/**
 * main - Prints the Fibonacci sequence.
 *
 * Return: Always 0.
 */
int main(void)
{

	long int fib, fibn, num1, num2;

	num1 = 1;

	num2 = 2;

	fib = fibn = 0;

	while (fib <= 4000000)
	{
		fib = num1 + num2;

		num1 = num2;

		num2 = fib;

		if ((num1 % 2) == 0)
		{
			fibn += num1;
		}
	}
	printf("%ld\n", fibn);
	return (0);
}
