#include <stdio.h>
/**
 * main - prints the combination of two numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num[num1]);
				putchar(num[num2]);

				if (num1 == num2)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

