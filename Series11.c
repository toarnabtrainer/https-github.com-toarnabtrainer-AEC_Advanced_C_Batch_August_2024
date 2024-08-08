/*
index -> 1   2   3   4   5   6   7   8
total =  4 + 7 + 4 + 7 + 4 + 7 + 4 + 7 + .... n terms
*/

#include <stdio.h>
int main(void) {
	int n, i, total, term;
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	term = 4; total = 0;
	for (i = 1; i <= n; i++) {
		total = total + term;
		printf("\nFor i = %d, term = %d and total = %d...", i, term, total);
		if (term == 4) term = 7; else term = 4;  // conditional statement
	}
	printf("\n\nSo the sum of first %d numbers is %d...", n, total);
	printf("\n\nEnd of the program...");
}
