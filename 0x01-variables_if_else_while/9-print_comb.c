#include <stdio.h>
/**
 * main - prints all possible combination of single digit.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int index;

	for (index = 48; index < 58; index++)
	{
		putchar(index);
		if (index != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
