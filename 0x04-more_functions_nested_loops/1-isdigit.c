#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code.
 * @n: A integer value
 * Description: A function that checks for a digit (0 through 9)
 * Return: 1 if n is a digit and 0 otherwise
 */

int _isdigit(int n)
{
	int i;
	int is_digit = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i == n)
			is_digit = 1;
	}
	return (is_digit);
}
