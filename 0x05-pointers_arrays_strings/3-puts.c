#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	char arr[strlen(str) + 1];

	strcpy(arr, str);

	puts(arr);
}

