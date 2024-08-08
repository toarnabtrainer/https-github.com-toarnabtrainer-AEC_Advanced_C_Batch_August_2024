/*
index -> 1   2   3   4    5   6   7   8   9   10   11  12   
total =  1 + 2 + 3 + 4 + 10 + 5 + 6 + 7 + 8 + 26 + 9 + 10 + .... n terms

What is the 99-th term of the series? (Do only logical calculations) - Answer is 80

100 terms = 20 Groups x 5 numbers each
(4 ordinary terms and 1 sum term) (80 ordinary terms and 20 sum terms)
*/

#include <stdio.h>
int main(void) {
	int term, i, temp_sum, final_sum, n;
	printf("\nPlease enter the number of terms: ");
	scanf("%d", &n);
	final_sum = 0; temp_sum = 0; term = 1;
	for (i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			final_sum += temp_sum;
			printf("\nFor i = %d, adding temp_sum = %d...", i, temp_sum);
			temp_sum = 0;
		} else {
			final_sum += term;
			printf("\nFor i = %d, adding term = %d...", i, term);
			temp_sum += term;
			term ++;
		}
	}
	printf("\n\nSo sum of first %d number of terms is %d...", n, final_sum);
	printf("\nEnd of the program...");
}
