#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * Function: sum_them_all
 * -----------------------
 *  Function calcs sum of all parameters
 *
 *  @n: num of parameters
 *  @...: other parameters
 *
 *  returns: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i = 0;
    int sum = 0;

    if (n == 0)
        return 0;

    va_start(args, n);
    for (; i < n; i++)
        sum += va_arg(args, int);

    va_end(args);

    return sum;
}
