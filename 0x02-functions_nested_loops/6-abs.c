#include "main.h"
/**
 * _abs - calc the absolutes value
 * of an int
 *
 * @x: The signs in ASCII code
 *
 * Return: 1 for lowercase alphabets. 0 for the rest.
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
