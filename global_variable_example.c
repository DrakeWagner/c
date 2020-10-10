#include <stdio.h>

int x = 70; /* global variable */
void function1() {
	printf("%d\n", x);
}
void function2() {
	printf("%d\n", x);
}
int main() {

	function1();
	function2();
	
	return 0;
} // runs both functions that attached to the global variable
