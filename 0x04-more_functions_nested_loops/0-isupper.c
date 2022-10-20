#include <ctype.h>

/**
 * _isupper - This function checks for uppercase character
 *
 * @c: The data type to check the argument
 *
 * Return: Always return zero if successful
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
