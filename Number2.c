// Find the sum of all digits of a user given number
#include <stdio.h>
#include <math.h>
int main(void) {
	int num, last_digit, total;
	
	printf("\nPlease enter an integer number: ");
	scanf("%d", &num);
	
	while (num != 0) {
		last_digit = num % 10;
		total += last_digit;
		num = num / 10;
	}
	
	printf("\nSo the sum of all digits of the given number is %d...", total);
	printf("\n\nEnd of the program...");
}
