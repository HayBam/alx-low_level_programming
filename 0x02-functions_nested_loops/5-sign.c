#include "main.h"

/**
 * print_sign - To check the sign of a number
 *
 * @n: the character to check for
 *
 * Return: Always return 1 if n if positive
 * 0 if n is zero
 * -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
}
