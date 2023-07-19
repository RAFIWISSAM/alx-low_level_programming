#include "function_pointers.h"



/**
 * print_name - function that prints a name
 *@name : character
 *@f :given name
 * Return: nothing
 */



void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	(*f)(name);
	}
}
