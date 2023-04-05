#include "main.h"

int _strlen_recursion(char *s);
int palindrome(char *s, int n);

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (palindrome(s, len));
}

/**
 * palindrome - helper function for is_palindrome
 *
 * @s: input string
 * @n: length of string s
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome(char *s, int n)
{
	if (n <= 1)
		return (1);
	else if (*s == *(s + n - 1))
		return (palindrome(s + 1, n - 2));
	else
		return (0);
}

