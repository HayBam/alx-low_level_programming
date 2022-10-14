#include <stdio.h>

/**
 * main - This function prints output of alphabeth
 * in small letters except from letters 'e' and 'q'
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	char alphabeth = 'a';

	for (alphabeth = 'a'; alphabeth <= 'z'; alphabeth++)
	{
		if (alphabeth == 'e' || alphabeth == 'q')
		{
			continue;
		}
		else
		{
			putchar (alphabeth);
		}
	}
	putchar ('\n');
	return (0);
}
