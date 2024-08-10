#include <stdio.h>
int main(void) {
	int data1, data2;
	void call_by_value(int, int);
	
	data1 = 100; data2 = 200;
	printf("\n\nAddress of data1 is %X and data2 is %X...", &data1, &data2);
	printf("\nFrom main() before calling the function data1 = %d and data2 = %d...", data1, data2);
	call_by_value(data1, data2);   // positional arguments
	printf("\nFrom main() after calling the function data1 = %d and data2 = %d...", data1, data2);
	
	printf("\n\nEnd of the program...");
}
void call_by_value(int d1, int d2) {  // positional parameters
	printf("\nAddress of d1 is %X and d2 is %X...", &d1, &d2);
	printf("\nFrom call_by_value() before update d1 = %d and d2 = %d...", d1, d2);
	d1 = 111; d2 = 222;
	printf("\nFrom call_by_value() after update d1 = %d and d2 = %d...", d1, d2);
}
