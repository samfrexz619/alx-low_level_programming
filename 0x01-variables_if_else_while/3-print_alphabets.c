#include <stdio.h>
/**
 * main - prints the alphabets in lowercase.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char smallLetter, bigLetter;

	smallLetter = 'a';
	bigLetter = 'A';
	while (smallLetter <= 'z')
	{
		putchar(smallLetter);
		smallLetter++;
	}
	while (bigLetter <= 'Z')
	{
		putchar(bigLetter);
		bigLetter++;
	}
	putchar('\n');
	return (0);
}
