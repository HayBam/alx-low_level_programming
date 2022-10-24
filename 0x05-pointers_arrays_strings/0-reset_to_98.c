#include "main.h"

/**
 * reset_to_98 - This function takes a pointer to an int
 * and updates the value it points to, to 98
 *
 * @n: This is the pointer for integer n
 *
 * Return: ALways return zero if successful
 */
void reset_to_98(int *n)
{
	int *a;
	
	a = &n;
	a = 98;
	*n = a
}
