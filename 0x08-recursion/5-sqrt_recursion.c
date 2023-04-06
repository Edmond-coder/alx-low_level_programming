#include "main.h"

int _sqrt(int lower_bound, int upper_bound);

/**
 * _sqrt_recursion - It returns the square root of n.
 * @n: An input integer.
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @lower_bound: lower limit of the binary search
 * @upper_bound: upper limit of the binary search
 * Return: The square root.
 */

int _sqrt(int lower_bound, int upper_bound)
{
	if (lower_bound * lower_bound  > upper_bound)
		return (-1);
	else if (lower_bound * lower_bound == upper_bound)
		return (lower_bound);
	return (_sqrt(lower_bound + 1, upper_bound));
}
