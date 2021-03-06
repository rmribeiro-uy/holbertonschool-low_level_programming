#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int inicio, fin = n - 1, temp = 0;

	for (inicio = 0; inicio < fin; inicio++)
	{
		temp = a[fin];
		a[fin] = a[inicio];
		a[inicio] = temp;
		fin--;
	}
}
