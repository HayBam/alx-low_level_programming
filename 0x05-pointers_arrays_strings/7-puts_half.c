#include "main.h"

/**
 * puts_half - This function prints half of a string
 * followed by a new line
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, j, k;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (len % 2)
	{
		for (k = (len - 1) / 2; k < len - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
	_putchar('\n');
}
