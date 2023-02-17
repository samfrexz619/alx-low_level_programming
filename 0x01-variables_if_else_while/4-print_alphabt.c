#include <stdio.h>
/**
 * main - prints the alphabets a-z except q and e.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabets;

	alphabets = 'a';
	while (alphabets <= 'z')
	{
		if ((alphabets == 'q') || (alphabets == 'e'))
		{
			continue;
		}
		putchar (alphabets);
		alphabets++;
	}
	putchar ('\n');
	return (0);
}
