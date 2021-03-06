#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{

	int count;

	for (count = 0; s1[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
	}
	return (0);
}
