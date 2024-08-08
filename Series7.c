/*
index -> 1    2    3    4    5     6     7
total =  2! + 4! + 6! + 8! + 10! + 12! + 14! + .... n terms

  i   fact  next_fact factor
------------------------------
  1      2!    4!      3, 4 
  2      4!    6!      5, 6
  3      6!    8!      7, 8  => (2 * i + 1), (2 * i + 2)
  4      8!   10!      9, 10
  5     10!   12!     11, 12
------------------------------
*/
#include <stdio.h>
void main(void) {
	int total, n, i, fact;

	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);

	total = 0; fact = 2;
	for(i = 1; i <= n; i++) {
		total = total + fact;
		printf("\nSo current i = %d, term = %d and total = %d...", i, fact, total);
		fact = fact * (2 * i + 1) * (2 * i + 2);
	}
	
	printf("\n\nSo the total for first %d terms is %d...", n, total);
	printf("\n\nEnd of the program...");
}




