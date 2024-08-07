/*
Find out the Digital Root of a user given number n.
if n = 142 => 1 + 4 + 2 = 7 (Digital Root)
if n = 119 => 1 + 1 + 9 = 11 => 1 + 1 = 2 (Digital Root)
if n = 991 => 9 + 9 + 1 = 19 => 1 + 9 = 10 => 1 + 0 = 1 (Digital Root)
*/
#include <stdio.h>

int main(void) {
	int num, total, digit;
	
	printf("\nPlease enter an integer number: ");
	scanf("%d", &num);
	
	while (num != 0) {
		total += num % 10;
		num /= 10;
		if (num == 0 && total > 9) {
			num = total;
			total = 0;
			printf("\nGoing agains for num = %d...", num);
		}
	}
	
	printf("\n\nSo the DIGITAL ROOT is %d...", total);
	printf("\n\nEnd of the program...");
}
