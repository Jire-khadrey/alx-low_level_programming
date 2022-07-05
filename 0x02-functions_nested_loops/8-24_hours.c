#include "main.h"

/**
 * jack_bauer - Check main
 * Description: This function prints every minute in one day
 * Return: Nothing
 */

void jack_bauer(void)
{
	int M, N;

	for (M = 0; M < 24; M++)
	{
		for (N = 0; 0 < 60; N++)
		{
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar(':');
			_putchar((N / 10) + '0');
			_putchar((N % 10) + '0');
			_putchar('\n');
		}
	}
}
