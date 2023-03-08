#include "main.h"

/**
 * pow_op - returns the natural square root of a number.
 * @num1: input number.
 * @i: iterator.
 * Return: square root or -1.
 */
int pow_op(int num1, int i)
{
	if (i % (num1 / i) == 0)
	{
		if (i * (num1 / i) == num1)
			return (i);
		else
			return (-1);
	}
	return (0 + pow_op(num1, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_op(n, 2));
}
