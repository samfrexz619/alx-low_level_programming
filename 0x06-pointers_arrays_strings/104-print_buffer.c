#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int m, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8x:", m);
			for (k = m; k < m + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (l = m; l < m + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
