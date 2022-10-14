#include <stdio.h>

/**
 * main - print all the combinations of single digits
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar ('\n');
	return (0);
}
