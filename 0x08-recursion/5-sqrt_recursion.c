#include "main.h"

/**
 * function1 - a function that checks for sqrt
 * @n: squared number
 * @factor: possible square root
 * Return: @factor, Otherwise -1
 */
int function1(int n, int factor)
{
	if (factor * factor == n)
		return (factor);
	else if (factor * factor > n)
		return (-1);
	else
		return (function1(n, factor + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural number
 * Return: the natural square root, Otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (function1(n, 0));
}
