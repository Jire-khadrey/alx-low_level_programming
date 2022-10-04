#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: First string
 * @src: String appended to the first string
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	i = 0;

	while (dest[len] != '\0')
		len++;

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
