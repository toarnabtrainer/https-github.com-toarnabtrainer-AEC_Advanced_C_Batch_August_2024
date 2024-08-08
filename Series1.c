/*
index -> 1   2   3   4   5   6   7
total =  1 + 2 + 3 + 4 + 5 + 6 + 7 + .... n terms
*/
#include <stdio.h>
void main(void) {
	int total, n, i;
	
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	
	total = 0;
	
	for(i = 1; i <= n; i++) {
		total = total + i;
		printf("\nSo current i = %d, term = %d and total = %d...", i, i, total);
	}
	
	printf("\n\nSo the total for first %d terms is %d...", n, total);
	
	printf("\n\nEnd of the program...");
}







