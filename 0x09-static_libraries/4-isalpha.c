#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
 
int _isalpha(int c)
{
  char u, l;
	int isletter = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				isletter = 1;
		}
	}
	return (isletter);
}
  
