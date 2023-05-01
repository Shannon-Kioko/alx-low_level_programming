/**
 * _puts - prints a string to stdout
 * @s: The string to be printed
 *
 * Return: void
 */

void _puts(char *s)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
