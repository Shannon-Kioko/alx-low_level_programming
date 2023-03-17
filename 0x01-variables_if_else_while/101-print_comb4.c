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
    int t;

    for (s = 48; s < 58; s++) {
        for (u = s + 1; u < 58; u++) {
            for (t = u + 1; t < 58; t++) {
                putchar(s);
                putchar(u);
                putchar(t);
                if (s != 56 || u != 57 || t != 58) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
