#include <stdio.h>

/**
 * main - This function prints output numbers 0-F
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar (num % 10 + '0');
		}
		else
		{
			putchar (num % 10 + 'a');
		}
	}
	putchar ('\n');
	return (0);
}
