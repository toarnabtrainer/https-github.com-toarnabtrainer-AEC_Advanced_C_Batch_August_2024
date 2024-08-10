#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 100;
	int *ptr;
	
	ptr = &i;
	printf("\nSo &i = %X, i = %d, &ptr = %X, ptr = %X and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	
	if ((ptr = (int *) malloc(sizeof(int) * 10)) == NULL) {
		printf("\n\nCan not allocate buffer space...");
		exit(1);   // unsuccessful exit
	}
	printf("\n\nPrinting the content of the memory buffer...");
	for(i = 0; i < 10; i++) {
		printf("\nLocation number %d, address %X and content = %d...", i, (ptr + i), *(ptr + i));
	}
	
	if ((ptr = (int *) calloc(10, sizeof(int))) == NULL) {
		printf("\n\nCan not allocate buffer space...");
		exit(1);   // unsuccessful exit
	}
	printf("\n\nPrinting the content of the memory buffer...");
	for(i = 0; i < 10; i++) {
		printf("\nLocation number %d, address %X and content = %d...", i, (ptr + i), *(ptr + i));
	}
	printf ("\n\nInitializing contents of the memory buffer...");
	for(i = 0; i < 10; i++) {
		*(ptr + i) = (i + 1) * 100 + i;
		printf("\nLocation number %d, address %X and content = %d...", i, (ptr + i), *(ptr + i));
	}
	
	if ((ptr = (int *) realloc(ptr, sizeof(int) * 15)) == NULL) {
		printf("\n\nCan not allocate buffer space...");
		exit(1);   // unsuccessful exit
	}
	printf("\n\nPrinting the content of the memory buffer...");
	for(i = 0; i < 15; i++) {
		printf("\nLocation number %d, address %X and content = %d...", i, (ptr + i), *(ptr + i));
	}
	
	printf("\n\nEnd of the program...");
}

















