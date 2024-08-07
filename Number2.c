// Find the sum of all digits of a user given number
#include <stdio.h>
#include <math.h>
int main(void) {
	int i,num, digit, total = 0, no_digit;
	
	printf("\nPlease enter an integer number: ");
	scanf("%d", &num);
	no_digit = log10(num) + 1;
	for (i = 1; i <= no_digit; i++) {
		digit = (int)(num/(pow(10,(i-1)))) % 10;
		total = total + digit;
		printf("\nfor i = %d, digit = %d and total = %d...", i, digit, total);
	}
	
	printf("\nSo the sum of all digits of the given number %d is %d...", num, total);
	printf("\n\nEnd of the program...");
}
/*
i   n     digit
    1368
1         8 = (int)(1368/1) % 10    = (int)(1368/(10^0)) % 10 => = (int)(1368/(10^(i-1))) % 10
2         6 = (int)(1368/10) % 10   = (int)(1368/(10^1)) % 10
3         3 = (int)(1368/100) % 10  = (int)(1368/(10^2)) % 10
4         1 = (int)(1368/1000) % 10 = (int)(1368/(10^3)) % 10
*/

/*
	while (num != 0) {
		last_digit = num % 10;
		total += last_digit;
		num = num / 10;
	}
	printf("\nSo the sum of all digits of the given number is %d...", total);*/

