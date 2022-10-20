#include "_putchar"

/**
 * print_numbers - This function prints the numbers 0 to 9
 * followed by a new line
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
