#include "main.h"

/**
 * more_numbers - This function prints the numbers 0 to 14
 * 10 times
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 11)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
