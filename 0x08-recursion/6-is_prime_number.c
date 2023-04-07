#include "main.h"

/**
 * is_prime - a function that checks if n is prime
 * @n: number checked
 * @i: iteration
 * Return: 1 or 0
 */
int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime(n, i - 1));
}
/**
 * is_prime_number - returns 1 if n is a prime number, otherwise return 0.
 * @n: number checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
