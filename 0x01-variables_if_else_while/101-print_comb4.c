#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints stdout with combinations of three digits from 012 to 789
 *
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
	for (b = a + 1; b < 9; b++)
	{
	for (c = b + 1; c < 10; c++)
	{
	printf("%d%d%d", a, b, c);
	if (a != 7 || b != 8 || c != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
