#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, prime;

	num = 612852475143;
	for (prime = 2; prime <= num; prime++)
	{
		if (num % prime == 0)
		{
			num /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
