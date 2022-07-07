#include <stdio.h>

/**
 * main - Generates a number from 1 to 100, followed by a new line
 * Description: Prints Fizz for multiples of 3, Buzz for multiples
 * of 5 and FizzBuzz for multiples of both.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
	}
	return (0);
}
