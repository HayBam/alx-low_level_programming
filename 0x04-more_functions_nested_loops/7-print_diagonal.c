#include "main.h"

/**
 * print_diagonal - This function prints '/' per number
 *
 * @n: This is the number of the integer value
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > i)
	{
		while (n > i)
		{
			_putchar(92);
			i++;
		}
		_putchar('\n');
	}
	else if (n <= i)
	{
		_putchar('\n');
	}
}
