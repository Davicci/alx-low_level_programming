#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	if (n != 99)
	{
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
