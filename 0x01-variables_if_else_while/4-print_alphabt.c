#include <stdio.h>
/**
 * main - prints the stdout
 *
 * Return: 0 if successful
 */
int main(void)
{
	char lowerCase, not, noT;

	not = 'e';
	noT = 'q';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
	if (lowerCase != not && lowerCase != noT)
	putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
