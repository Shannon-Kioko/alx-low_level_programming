#include "main.h"

/**
 * _strstr: locates a substring
 *
 * @haystack: input string
 * @needle: input string
 *
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
    int x = 0, y = 0;
    
    while (haystack[x] != '\0')
    {
        while (needle[y] && haystack[x] == needle[0]) 
        {
        	if (haystack[x + y] == needle[y]) 
        	{
        	    y++;
        	}
		else 
		{
		    break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else 
		{
		    /** returns a pointer to the start of the substring in 
		     * haystack that matches the needle string.
		     */
		    return (haystack + x);
		}
	}
			
    }
    return (0);
    
}
