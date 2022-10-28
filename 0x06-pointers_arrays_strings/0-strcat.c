#include "main.h"

/**
 * _strcat - This function joins two strings
 *
 * @dest: string to append to
 * @src: string for addition
 *
 * Return: dest if succesful
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
