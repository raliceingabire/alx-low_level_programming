#include <stdio.h>
#include <stdlib.h>
#include "function-pointers.h"

void print_name(char *name, void (*f)(char *)) {
	if (name != NULL && f != NULL)
		f(name);
} 
