#include <ctype.h>

/**
 * main - This function checks for uppercase character
 *
 * Returns: Always return zero if successful
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
