#include "main.h"

/**
 * print_line - Check the code
 * @n: Integer input
 * Description: A function that draws a straight line in the terminal
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
