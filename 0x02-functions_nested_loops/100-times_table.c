#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int l, m, o;

	for (l = 0; l <= n; l++)

	{
	for (m = 0; m <= n; m++)
	{
	int result = l * m;

	o = l * m
	if (m == 0)
	printf("%d", result);
	else
	printf(", %4d", result);
	}
	printf("\n");
	}
	}
}
