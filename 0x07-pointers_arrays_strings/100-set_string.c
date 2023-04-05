#include "main.h"
/**
* set_string - Updates the value of a pointer to a char.
*
* @s: A pointer to the pointer to be updated.
* @to: The new value for the pointer.
*
* Return: Nothing.
*/
void set_string(char **s, char *to)
{
    *s = to;
}
