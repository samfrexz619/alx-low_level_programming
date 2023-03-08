#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @str: string
 * @num: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int comparator(char *str, int num, int n2)
{
	if (*(str + num) == *(str + n2))
	{
		if (num == n2 || num == n2 + 1)
			return (1);
		return (0 + comparator(str, num + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
