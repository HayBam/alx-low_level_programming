#include <stdio.h>

/**
 * main - This function prints output of alphabeth
 * in small letters
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	char alphabeth = 'a';

	while (alphabeth <= 'z')
	{
		putchar (alphabeth);
		alphabeth++;
	}
	putchar ('\n');
	return (0);
}
