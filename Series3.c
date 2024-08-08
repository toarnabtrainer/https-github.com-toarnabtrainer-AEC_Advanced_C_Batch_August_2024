/*
index -> 1   2   3   4   5    6    7
total =  1 + 3 + 5 + 7 + 9 + 11 + 13 + .... n terms
*/
#include <stdio.h>
void main(void) {
	int total, n, i;
	
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	
	total = 0;
	
	for(i = 1; i <= n; i++) {
		total = total + (2 * i - 1);
		printf("\nSo current i = %d, term = %d and total = %d...", i, (2 * i - 1), total);
	}
	
	printf("\n\nSo the total for first %d terms is %d...", n, total);
	
	printf("\n\nEnd of the program...");
}







