#include <stdio.h>

/**
 * main - This function prints out numbers 0-9
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
