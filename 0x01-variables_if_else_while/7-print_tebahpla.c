#include <stdio.h>
/**
 * main - prints the alphabets in reverse.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char reverseAlphabet = 'z';

	while (reverseAlphabet >= 'a')
	{
		putchar(reverseAlphabet);
		reverseAlphabet--;
	}
	putchar('\n');
	return (0);
}
