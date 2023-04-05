#include "main.h"

/**
 * calculate_sqrt - Calculates the square root of a number
 * @n: The number to calculate the square root of
 * @i: The iterator to try to calculate the square root with
 *
 * Return: The square root of n or -1 if it does not have one
 */

int calculate_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (calculate_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n or -1 if it does not have one
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 0));
}
