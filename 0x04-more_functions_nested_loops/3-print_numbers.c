#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * @num: number variable
 * Return: Always 0.
 */

void print_numbers(void num)
{

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}