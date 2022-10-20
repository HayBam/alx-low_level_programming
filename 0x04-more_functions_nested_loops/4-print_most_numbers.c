#include "main.h"

/**
 * print_most_numbers - This function prints the numbers 0 to 9
 * except 2 and 4
 * followed by a new line
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
		_putchar(i + '0');
		i++;
		}
	}
	_putchar('\n');
}
