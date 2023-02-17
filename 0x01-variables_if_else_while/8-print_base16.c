#include <stdio.h>
/**
 * main - prints the alphabets in base16.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number = 48, alpha = 97;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	while (alpha < 103)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
