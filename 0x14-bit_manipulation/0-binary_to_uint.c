#include "main.h"
/**
 * binary_to_uint - converts binary to an unsigned int.
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int;
	int lnt, base2;

	if (!b)
		return (0);

	u_int = 0;

	for (lnt = 0; b[lnt] != '\0'; lnt++)
		;
	for (lnt--, base2 = 1; lnt >= 0; lnt--, base2 *= 2)
	{
		if (b[lnt] != '0' && b[lnt] != '1')
		{
			return (0);
		}
		if (b[lnt] & 1)
		{
			u_int += base2;
		}
	}
	return (u_int);
}
