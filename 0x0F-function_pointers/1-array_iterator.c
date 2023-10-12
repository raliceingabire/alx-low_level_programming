#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int)) {
for (size_t i = 0; i < size; i++){ action(array[i]);
}

}
void increment_element(int element) { 
printf("%d", element + 1);
}
int main(){ 
int array[] = {1, 2, 3, 4, 5};
size_t size = sizeof(array) / sizeof(array[0];
		//print each element of the array 
	array_iterator(array, size, print_element);
	printf("\n");

	//increment each element of the array
	
	array_iterator(array, size, increment_element);
	printf("\n");
	return 0;

}
