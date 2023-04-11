#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int ex;

	char *ch;

	ex = 1;

	ch = (char *) &ex;

	return ((int)*ch);
}
