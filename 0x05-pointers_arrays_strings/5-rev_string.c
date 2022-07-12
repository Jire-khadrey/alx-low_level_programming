#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string input
 * Return:0
 */

void rev_string(char *s)
{
	char rev;
	int i, j, len;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	i = len - 1;

	for (j = 0; j < len / 2; j++)
	{
		rev = s[j];
		s[j] = s[i];
		s[i--] = rev;
	}
}
