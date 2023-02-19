#include <stdio.h>
/**
 * main - prints combination  numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	n1 = 48;
	n2 = 48;
	n3 = 48;

	while (n1 < 58)
	{
		n2 = 48;
		while (n2 < 58)
		{
			n3 = 48;
			while (n3 < 58)
			{
				if (n1 != n2 && n1 != n3 && n2 != n3 && n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n2 == 56 && n1 == 55 && n3 == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
