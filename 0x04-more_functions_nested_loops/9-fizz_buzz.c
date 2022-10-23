#include <stdio.h>

/**
 * main - This function prints number 1 through 100
 * with multiples of three fizz and buzz with multiples of five
 *
 * Return: Always return zero if successful
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
		else
			printf("\n");
		
	}
	return (0);
}
