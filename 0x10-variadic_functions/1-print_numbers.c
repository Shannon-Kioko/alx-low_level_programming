#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints no's followed by newline
 *
 * @separator: Input string separating nums
 * @n: num of parameters
 * @...: other parameters
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i = 0;
    int argV;

    va_start(args, n);
    for (; i < n; i++)
    {
        argV = va_arg(args, int);
        printf("%d", argV);
        if (separator == NULL)
            continue;
        if (i < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}
