#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: String input value
 * Return: 0
 */

int _strlen(char *s)
{
	int lent;

	lent = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}

	return (lent);
}
