#include <stdio.h>
int main(void) {
	int arr[10];
	int i;
	
	printf("\n\nInitializing the content of the array...");
	for(i = 0; i < 10; i++) {
		arr[i] = (i + 1) * 100 + 5;
	}

	printf("\n\nDisplaying the content of the array...");
	for(i = 0; i < 10; i++) {
		printf("\nLocation Number %d and content = %d...", i, arr[i]);
	}
	
	printf("\n\nEnd of the program...");
}
