#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of cmd line args.
 * @argv: array that contains the program cmd line args.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int index, b, add = 0;

	for (index = 1; index < argc; index++)
	{
		for (b = 0; argv[index][b] != '\0'; b++)
		{
			if (!isdigit(argv[index][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[index]);
	}
	printf("%d\n", add);
	return (0);
}
