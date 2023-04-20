#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints string followed by newline.
 *
 * @separator: Input strings separating values.
 * @n: Num of parameters.
 * @...: other parameters.
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;

    va_start(args, n);
    for (; i < n; i++)
    {
        str = va_arg(args, char*);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);
        if (separator == NULL)
            continue;
        if (i < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}
