#include "function_pointers.h"

/**
 * print_name - This calls a function to print a name
 *
 * @name: This is a pointer to a string
 * @f: This is a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
