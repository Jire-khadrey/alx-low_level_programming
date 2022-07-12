#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: first integer pointer variable
 * @b: Second integer pointer variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
