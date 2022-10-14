#include <stdio.h>

/**
 * main - This function prints output of alphabeth
 * in small letters and capital letters
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	char alphabeth = 'a';
	char alphabeth2 = 'A';

	while (alphabeth <= 'z')
	{
		putchar (alphabeth);
		alphabeth++;
	}
	while (alphabeth2 <= 'Z')
	{
		putchar (alphabeth2);
		alphabeth2++;
	}
	putchar ('\n');
	return (0);
}
