#include "main.h"

/**
 * print_line - This function prints _ everytime
 * there is a number
 *
 * @n: Takes the input of integer
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
