#include "main.h"
#include <time.h>
#include <stdlib.h>
/**
 * main- Entry point to program
 *
 * Return: password
 */

int main()
{
	int pwd;
	srand(time(NULL));
	pwd = rand();
	printf("%d", pwd);
	return (pwd);
}

