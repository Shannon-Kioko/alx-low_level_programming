#include <stdio.h>

void main_construct(void) __attribute__((constructor));

/**
 * main_construct - Prints msg before main() is executed.
 *
 * Return: Nothing.
 */
void main_construct(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

int main(void)
{
    printf("This is the main function.\n");
    return (0);
}
