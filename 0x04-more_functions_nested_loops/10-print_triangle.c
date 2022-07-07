#include "main.h"

/**
 * print_triangle - check the main file
 * @size: Value of triangle size
 * Description: A function that prints a triangle, followed by a new line
 * Return: 0;
 */

void print_triangle(int size)
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
