
int *ptr => means ptr is a variable which contains an address and content of that address is an integer quantity.
char *ptr => means ptr is a variable which contains an address and content of that address is a character quantity.
float *ptr => means ptr is a variable which contains an address and content of that address is a float quantity.

#include <stdio.h>
int main(void) {
	int i = 100;
	int *ptr;
	
	ptr = &i;
	
	printf("\nSo &i = %x, i = %d, &ptr = %x, ptr = %x and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\nSo &i = %X, i = %d, &ptr = %X, ptr = %X and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	
	printf("\n\nEnd of the program...");
}



