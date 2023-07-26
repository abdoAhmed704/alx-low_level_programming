#include "function_pointers.h"
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: the string name
 * @f: the pointer pointing to fun
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
