#include "main.h"
#include <string.h>
/**
 * rev_string - function
 * @s: integer declared
 * Return: no return
 */
void rev_string(char *s)
{
	char c;
	int l, i;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
	c = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = c;
	}
}
