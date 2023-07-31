#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints numbers from 01 to 89 with a comma and space between each
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
	putchar(a + '0');
	putchar(b + '0');
	if (a != 8 || b != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
