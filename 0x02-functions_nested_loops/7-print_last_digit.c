#include "holberton.h"

/**
 * print_last_digit - print last digit.
 * @n: input value
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
		a = -1 * a;
	_putchar('0' + a);
	return (a);
}
