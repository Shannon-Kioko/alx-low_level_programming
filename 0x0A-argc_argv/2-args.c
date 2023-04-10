#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: The num of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /* Print all of the program's command line arguments */
    while (argc--)
    {
        printf("%s\n", *argv++);
    }

    return (0);
}

