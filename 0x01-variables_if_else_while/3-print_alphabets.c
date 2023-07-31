#include <stdio.h>
/**
 * main - prints to the stdout
 *
 * Return: 0 if successful
 */
int main(void)
{
	char low;
	char up;

	for (low = 'a'; low <= 'z'; low++)
	{
	putchar(low);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
	putchar(up);
	}
	putchar('\n');
	return (0);
}
