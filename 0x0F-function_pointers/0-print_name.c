/**
 * print_name - prints name given
 * @name: name wanted to be printed
 * @f: pointer to the function which will print the name
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
