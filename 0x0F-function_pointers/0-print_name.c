#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print a name from a function pointer
 */

void print_name(char *name, void (*f)(char *))
{ if(name  == NULL || f == NULL)
	return;
	f(name);
}
