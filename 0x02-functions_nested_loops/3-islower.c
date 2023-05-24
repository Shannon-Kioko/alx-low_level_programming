#include "main.h"

/**
 * _islower - Check Description
 * @c: input character
 * Description: The function checks for lowercase letters
 *
 * Return: 1 if lowercase or 0 if uppercaser
 */

int _islower(int c)
{
	char a;
	int low = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			low = 1;
	}
	return (low);
}

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

