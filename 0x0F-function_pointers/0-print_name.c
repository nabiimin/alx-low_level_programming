#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: string to be printed
 * @f: pointer to function that take in a pointer to char
 *
 * Return: void(nothing)
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
