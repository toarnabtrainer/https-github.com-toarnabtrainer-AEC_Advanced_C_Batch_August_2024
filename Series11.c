/*
index -> 1   2   3   4   5   6   7   8
total =  4 + 7 + 4 + 7 + 4 + 7 + 4 + 7 + .... n terms
 
 x  y  x xor y  
--------------
 0  0   0    Boolean Identities:
 0  1   1    x xor 0 = x, x xor 1 = x', x xor x = 0, x xor x' = 1
 1  0   1             4 => 1 0 0
 1  1   0              xor 0 1 1 => 3 
--------------             -----
                      7 => 1 1 1
*/

#include <stdio.h>
#include <math.h>
int main(void) {
	int n, i, total, term;
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	term = 4; total = 0;
	for (i = 1; i <= n; i++) {
		total = total + term;
		printf("\nFor i = %d, term = %d and total = %d...", i, term, total);
		term = term ^ 3;
		// term = 28 / term;
		// term = 5.5 + (term == 4? 1.5 : -1.5);
		// term = 11 - term;
		// term = 5.5 + pow(-1, i + 1) * 1.5;    // 5.5 + 1.5   5.5 - 1.5, 5.5-(pow(-1,i)*1.5)
		// term = (term % 2 == 0)? 7 : 4;
		// term = term + pow(-1, i + 1) * 3;
		// term = (term == 4)? 7 : 4;
		// term = (i % 2 == 0)? 4 : 7;
		// if (term == 4) term = 7; else term = 4;  // conditional statement
	}
	printf("\n\nSo the sum of first %d numbers is %d...", n, total);
	printf("\n\nEnd of the program...");
}
