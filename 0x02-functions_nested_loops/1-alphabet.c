#include <stdio.h>
#include <main.h>

/**
 * main - creates a function that prints alphabet in lowercase 
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
