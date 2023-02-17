#include <stdio.h>
/**
 * main - prints 0-9.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
