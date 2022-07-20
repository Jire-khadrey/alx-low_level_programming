#include "main.h"

/**
 * _sqrt_recursion - returns the natural square rootof a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion - resources to find the natural
 * square root of anumber
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * 1 == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
