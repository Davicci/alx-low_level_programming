#include <stdio.h>
/**
 * main - prints out the stdout
 * Return: 0 always
 */
int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i <= num; i++)
	{
	if (num % i == 0)
	{
	num = num / i;
	i--;
	}
	}
	printf("%lu\n", i);
	return (0);
}
