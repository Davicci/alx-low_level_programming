#include "main.h"
/**
 * _strcpy - function to copy a string
 * @src: assinged integer
 * @dest: assigned integer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int abc = 0;

	while (*(src + abc) != '\0')
	{
	*(dest + abc) = *(src + abc);
	abc++;
	}
	*(dest + abc) = '\0';
	return (dest);
}
