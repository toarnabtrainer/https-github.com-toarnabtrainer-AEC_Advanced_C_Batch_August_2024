/*
index -> 1   2   3   4    5    6    7
total =  2 + 4 + 6 + 8 + 10 + 12 + 14 + .... n terms
*/
#include <stdio.h>
void main(void) {
	int total, n, i;
	
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	
	total = 0;
	
	for(i = 1; i <= n; i++) {
		total = total + (2 * i);
		printf("\nSo current i = %d, term = %d and total = %d...", i, (2 * i), total);
	}
	
	printf("\n\nSo the total for first %d terms is %d...", n, total);
	
	printf("\n\nEnd of the program...");
}







