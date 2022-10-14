#include <stdio.h>

/**
 * main - This function prints output numbers 0-9
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar (num % 10 + '0');
	}
	putchar ('\n');
	return (0);
}
