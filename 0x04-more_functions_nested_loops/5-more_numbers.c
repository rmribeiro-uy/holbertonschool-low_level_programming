#include "holberton.h"

/**
 * more_numbers - function description
 *
 *
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int numero, veces, decena = numero / 10, unidad = numero % 10;

	for (veces = 0; veces <= 10; veces++)
	{
		for (numero = 0, numero <= 14, numero++)
		{
			if (numero >= 10)
			{
				_putchar(decena + '0');
			}
			_putchar(unidad + '0');
		}
		_putchar('\n')
	}
}