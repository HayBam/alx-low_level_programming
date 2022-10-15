#include <stdio.h>

/**
 * main - This function prints the unique combination
 * of single digit numbers
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || (a != 56 && b != 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
