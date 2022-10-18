#include "main.h"

/**
 * _isalpha - To check the alphabetical character
 *
 * @c: the character to check for
 *
 * Return: Always return 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c);
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
