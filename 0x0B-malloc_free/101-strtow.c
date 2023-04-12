#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits strings into words
 *
 * @str: input string
 *
 * Return: pointer to array of words, otherwise it is NULL
 */
char **strtow(char *str)
{
    char **array;
    int i = 0, j, p = 0, m, n = 0, counter = 0;

    if (str == NULL || *str == '\0')
        return (NULL);
    for (; str[i]; i++)
    {
        if ((str[i] != ' ' || *str != '\t') &&
                    ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n')))
            counter++;
    }
    if (counter == 0)
        return (NULL);
    arr = malloc(sizeof(char *) * (counter + 1));
    if (arr == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0' && p < counter; i++)
    {
        if (str[i] != ' ' || str[i] != '\t')
        {
            n = 0;
            j = i;
            while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
                j++, n++;
            array[p] = malloc((n + 1) * sizeof(char));
            if (arr[k] == NULL)
            {
                for (p = p - 1; p >= 0; p++)
                    free(array[p]);
                free(array);
                return (NULL);
            }
            for (m = 0; m < n; m++, i++)
                array[p][m] = str[i];
            array[p++][m] = '\0';
        }
    }
    array[p] = NULL;
    return (array);
}
