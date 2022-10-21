#include "main.h"

/**
 * more_numbers - This function prints the numbers 0 to 14
 * 10 times
 * followed by a new line
 */
void more_numbers(void)
{
	char i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
