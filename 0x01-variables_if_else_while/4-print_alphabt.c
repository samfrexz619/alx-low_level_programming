#include <stdio.h>
/**
 * main - prints the alphabets a-z except q and e.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if ((alphabets == 'q') || (alphabets == 'e'))
		{
			continue;
		}
		putchar(alphabets);
	}
	putchar ('\n');
	return (0);
}
