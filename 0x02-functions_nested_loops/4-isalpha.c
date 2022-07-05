#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *@c: A character input
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise.
 */

int _isalpha(int c)
{
	char low, up;
	int is_l = 0;

	for (low = 'a', low <= 'z', low++)
	{
		for (up = 'A', up <= 'Z', up++)
			if (c == low || c == up)
				is_l = 1;
	}
}
