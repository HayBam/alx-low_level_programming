#include "main.h"

/**
 * _islower - To check lowercase character
 *
 * @c: the character to check for
 *
 * Return: Always return 1 if successfully otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
