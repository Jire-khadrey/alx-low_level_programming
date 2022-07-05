#include <stdio.h>
#include "main.h"

/**
 * main - prints "_putchar"
 * return : 0
 */

int main(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(ch[i]);
	putchar('\n');

	return (0);
}
