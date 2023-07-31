#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print stdout
 *
 * Return: 0 if successful
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
	putchar(rev);
	}
	putchar('\n');
	return (0);
}
