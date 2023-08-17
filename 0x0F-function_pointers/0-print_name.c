#include "function_pointrs.h"
#include <stdio.h>

/**
 * print_ma,e - print name using to function
 * @name: string to add
 * @f: poiter to function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
