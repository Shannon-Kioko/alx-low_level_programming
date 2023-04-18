#include <stdio.h>
/**
  * main - prints name of file compiled from, followed with new line
  * Return: 0
  */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
