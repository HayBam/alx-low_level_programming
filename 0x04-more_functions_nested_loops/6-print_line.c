#include "main.h"

/**
 * print_line - This function prints _ everytime
 * there is a number
 *
 * Return: Always return zero if successful
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > i)
	{
		while (n > i)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else if (n <= i)
	{
		_putchar('\n');
	}
}
