#include <stdio.h>
#include <math.h>
int main(void) {
	int n, no_digit;
	
	printf("\nPlease enter one integer: ");
	scanf("%d", &n);
	
	no_digit = 0;
	while (pow(10, no_digit) <= n) {
		no_digit ++;
	}
	
	printf("\nSo number %d has %d number of digits...", n, no_digit);
	printf("\n\nEnd of the program...");
}
