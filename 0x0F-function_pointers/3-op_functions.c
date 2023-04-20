#include "calc.h"
#include <stdio.h>

/**
 * op_add - a function that adds 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: division of @a and @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns the remainder
 * @a: num 1
 * @b: num 2
 * Return: remainder of the division of @a and @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
