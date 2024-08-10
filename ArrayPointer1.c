#include <stdio.h>
int main(void) {
	int arr[10];
	void array_initialize(int []);
	void array_display(int *);  // int [], int *
	
	array_initialize(arr);
	array_display(arr);

	printf("\n\nEnd of the program...");
}
void array_initialize(int arr1[]) {
	int i;
	printf("\n\nInitializing the content of the array...");
	for(i = 0; i < 10; i++) {
		arr1[i] = (i + 1) * 100 + 5;
	}
}
void array_display(int *arr2) {      // int arr2[], int arr2[10000], int arr2[1], int *arr2
	int j;
	printf("\n\nDisplaying the content of the array...");
	for(j = 0; j < 10; j++) {
		printf("\nLocation Number %d and content = %d...", j, j[arr2]);  // arr2[j], *(arr2 + j), j[arr2]
	}
}
