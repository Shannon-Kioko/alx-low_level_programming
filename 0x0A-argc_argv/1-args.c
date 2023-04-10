#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /** If the program name exists, print the number of
     * arguments minus the program name
     */
    if (argv[0])
    {
        printf("%d\n", argc - 1);
    }

    return (0);
}

