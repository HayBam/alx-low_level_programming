#include <stdio.h>

/**
 * main - This function prints output of alphabeth
 * in small letters
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	char alphabeth = 'z';

	while (alphabeth >= 'a')
	{
		putchar (alphabeth);
		alphabeth--;
	}
	putchar ('\n');
	return (0);
}
