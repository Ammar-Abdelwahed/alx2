#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: name to be printed
 * @f: the function which is used to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
