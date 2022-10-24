#include "main.h"

/**
 * int _strlen - This function returns the length of a string
 *
 * @s: what is to be checked
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
