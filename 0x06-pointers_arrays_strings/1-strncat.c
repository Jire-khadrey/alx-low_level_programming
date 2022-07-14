#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: First string
 * @src: String appended to the first string
 * @n: integer input
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	i = 0;

	while (dest[len] != '\0')
		len++;

	while (src[i] != '\0' && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
