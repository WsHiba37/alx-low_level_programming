#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name printed
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
