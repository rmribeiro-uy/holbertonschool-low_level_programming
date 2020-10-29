#include "lists.h"
#include <stdio.h>

/**
 * __start - unction that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 *
 * Description: print before the main
 * Return: Nothing
 */

void __start(void) __attribute__((constructor))
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
