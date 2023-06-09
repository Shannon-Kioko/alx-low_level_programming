#include "main.h"

/**
 * wildcmp - compares two strings, one can contain "*"
 * character that can replace any string
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if strings match, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}

