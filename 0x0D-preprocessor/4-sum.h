#include <stdio.h>

#define SUM(x, y) ((x) + (y))
int main(void) {
	int num1 = 10;
	int num2 = 20;
	int result = SUM(num1, num2);
	printf("The sum of %d and %d is %d\n", num1, num2, result);
	return 0;


}
