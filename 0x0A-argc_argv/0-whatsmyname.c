#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: The num of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /* If at least one argument was passed to the program, print the program name */
    if (argc > 0)
    {
        printf("%s\n", argv[0]);
    }

    return (0);
}

