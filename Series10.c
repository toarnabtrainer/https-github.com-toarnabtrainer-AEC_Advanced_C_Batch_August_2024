/*
index -> 1   2   3   4    5   6   7   8   9   10   11  12   
total =  1 + 2 + 3 + 4 + 10 + 5 + 6 + 7 + 8 + 26 + 9 + 10 + .... n terms

What is the 99-th term of the series? (Do only logical calculations) - Answer is 80

100 terms = 20 Groups x 5 numbers each
(4 ordinary terms and 1 sum term) (80 ordinary terms and 20 sum terms)
*/

#include <stdio.h>
int main(int) {
	int term, i, temp_sum, final_sum, n;
	printf("\nPlease enter the number of terms: ");
	scanf("%d", &n);
	fs = 0; ts = 0; term = 1;
	for (i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			final_sum += temp_sum;
			printf("\nAdding temp_sum = %d...", temp_sum);
			????
		} else {
			final_sum += term;
			printf("\nAdding term = %d...", term);
			temp_sum += term;
			term ++;
		}
	}
	printf("\n\nSo sum of first %d number of terms is %d...", n, final_sum);
	printf("\nEnd of the program...");
}
