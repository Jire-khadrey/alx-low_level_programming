#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string input
 * Return:0
 */

void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
		i++;

	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
