#include "main.h"

/**
 * print_square - Check the main file
 * @size: Value of square size
 * Description: A function that prints a square , followed by a new line
 * Return: 0
 */

void print_square(int size)
{
	int i;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
			_putchar('#');
	}
}
