#include "main.h"

/**
 * swap_int - This function swaps the values of two integers
 *
 * @a: Pointer variable for first argument
 * @b: Pointer variable for second argument
 *
 * Return: This function returns valuse for @a and @b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
