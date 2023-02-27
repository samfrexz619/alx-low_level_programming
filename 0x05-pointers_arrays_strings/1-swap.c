#include "main.h"
/**
 * swap_int - swaps the values of two int.
 * @a: first int.
 * @b: second int.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;

	*b = swap;
}
