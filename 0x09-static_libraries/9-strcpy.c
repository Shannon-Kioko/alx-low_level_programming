/**
 * _strcpy - prints string pointed to by src,
 * including terminating /0, to the buffer pointed
 * to by dest
 *
 * @dest: destination pointer
 * @src: initial pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (tmp);
}
