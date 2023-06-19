#include "main.h"

/**
 * _strspn: function returns number of bytes in
 * initial segment of s
 *
 * @s: input string
 * @accept: input character(s)
 *
 * Return: number of bytes in memory segment
 */

unsigned int _strspn(char *s, char *accept)
{
  int x = 0;
  char *y = accept;
  while (*s)
  {
      int i = 0;
      while (*accept)
      {
          if (*accept == *s)
          {
              x++;
              i = 1;
              break;
          }
          accept++;
      }
      s++;
      accept = y;
      if (i == 0)
          break;
  }
  return x;
}
