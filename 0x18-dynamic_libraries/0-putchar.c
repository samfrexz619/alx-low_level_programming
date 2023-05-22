#include "main.h"

/**
 * main - Prints _putchar.
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int nums[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int index, size;

	size = sizeof(nums) / sizeof(nums[index]);

	for (index = 0; index < size; index++)
	{
		_putchar(nums[index]);
	}
	_putchar('\n');
	return (0);
}
