#include <stdio.h>
void print_name(char *name, void (*f)(char *)) {
f(name);

}
void print_name_function(char *name) {
printf("Name: %s\n", name);

}
int main() { 
char name[] = "john doe";
print_name(name, print_name_function);
return0 ;


}
