#include "function_pointers.h"
#include <stdio.h>

#include "function-pointers.h"

void print_name(char *name, void (*f)(char *)) {
	if (name == NULL || f == NULL)
		return;
		f(name);
}
