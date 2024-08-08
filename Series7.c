/*
index -> 1    2    3    4    5     6     7
total =  2! + 4! + 6! + 8! + 10! + 12! + 14! + .... n terms

  i   fact  next_fact factor
------------------------------
  1      1!    3!      2, 3 
  2      3!    5!      4, 5
  3      5!    7!      6, 7  => (2 * i), (2 * i + 1)
  4      7!    9!      8, 9
  5      9!    11!     10, 11
------------------------------
*/
#include <stdio.h>
void main(void) {
	int total, n, i, fact;

	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);

	total = 0; fact = 1;
	for(i = 1; i <= n; i++) {
		total = total + fact;
		printf("\nSo current i = %d, term = %d and total = %d...", i, fact, total);
		fact = fact * (???) * (???);
	}
	
	printf("\n\nSo the total for first %d terms is %d...", n, total);
	printf("\n\nEnd of the program...");
}




