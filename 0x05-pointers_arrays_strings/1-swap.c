#include "main.h"
/**
 * swap_int - function declared
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
