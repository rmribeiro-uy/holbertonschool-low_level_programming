#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: name of the person
 * @f: pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL)
	{
		(*f)(name);
	}
	else
	{
		return;
	}
}
