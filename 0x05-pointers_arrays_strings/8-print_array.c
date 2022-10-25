#include <stdio.h>
#include "main.h"

/**
 * print_array - This function prints n elements of an array of integers
 * followed by a new line
 *
 * @a: This array is to be printed
 * @n: The number of elements to printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
