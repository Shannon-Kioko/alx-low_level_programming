#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    const char *s = "Hello, world!";
    printf("%lu\n", hash_djb2((const unsigned char *)s));

    return 0;
}
