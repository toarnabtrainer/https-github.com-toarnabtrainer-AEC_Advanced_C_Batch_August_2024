#include <stdio.h>
int main(void) {
	int num1, num2, total, difference, product, quotient;
	void my_input(int *);
	void my_calculations(int, int, int *, int *, int *, int *);
	
	my_input(&num1);
	my_input(&num2);
	printf("\nSo user given inputs are num1 = %d and num2 = %d...", num1, num2);
	
	my_calculations(num1, num2, &total, &difference, &product, &quotient);
	printf("\nSo %d + %d = %d...", num1, num2, total);
	printf("\nSo %d - %d = %d...", num1, num2, difference);
	printf("\nSo %d * %d = %d...", num1, num2, product);
	printf("\nSo %d / %d = %d...", num1, num2, quotient);
	
	printf("\n\nEnd of the program...");
}
void my_calculations(int n1, int n2, int *tt, int *dd, int *pp, int *qq) {
	printf("\nPerforming all the calculations...");
	*tt = n1 + n2;
	*dd = n1 - n2;
	*pp = n1 * n2;
	*qq = n1 / n2;
}
void my_input(int *n) {
	printf("\nPlease enter one integer number: ");
	scanf("%d", n);
}
