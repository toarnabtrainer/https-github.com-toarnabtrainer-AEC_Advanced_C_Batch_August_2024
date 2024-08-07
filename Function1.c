#include <stdio.h>

int main(void) {
	int num1, num2, total;
	int my_input(void);   // prototype declaration
	void my_welcome(void);
	int my_addition(int, int);
	
	my_welcome();
	
	num1 = my_input();
	num2 = my_input();
	
	total = my_addition(num1, num2);
	
	printf("\n\nSo %d + %d = %d...", num1, num2, total);
	
	printf("\n\nEnd of the program...");
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of Programming !!!");
}
int my_input(void) {
	int number;
	
	printf("\nPlease enter an integer number: ");
	scanf("%d", &number);
	
	return number;
}

int my_addition(int n1, int n2) {
	int sum;
	printf("\nPerforming the addition operation...");
	sum = n1 + n2;
	return sum;
}

