#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(numbers, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i%s", va_arg(numbers, int), separator);
		}
	}

	va_end(numbers);
	printf("\n");
}