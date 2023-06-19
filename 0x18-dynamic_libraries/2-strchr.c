#include "main.h"

/**
 * _strchr: locates a character in the string
 *
 * @s: input string
 * @c: input character
 *
 * Return: character located
 */

char *_strchr(char *s, char c)
{
    char *x = '\0';
    
    while (*s != '\0')
    {
        if (*s == c)
        {
            x = s;
            break;
        }
        s++;
    }
    return (x);
}
