#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
	char letra;


	for (letra = 97; letra <= 122; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}