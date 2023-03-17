#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int s;
    int u;

    for (s = 48; s < 58; s++) {
        /* Greater by one to make sure there are no reccurences such as 01 and 10 */
        for (u = s + 1; u < 58; u++) {
            putchar(s);
            putchar(u);
            /* Only adds the separators if the number isn't the last number */
            if (s != 56 || u != 57) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
