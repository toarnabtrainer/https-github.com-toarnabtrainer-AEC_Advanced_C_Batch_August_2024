#include <stdio.h>

int main(void) {
	int num1, num2, total;
	int my_input(void);   // prototype declaration
	void my_welcome(void);
	
	my_welcome();
	
	num1 = my_input();
	num2 = my_input();
	
	printf("\nPerforming the addition operation...");
	total = num1 + num2;
	
	printf("\n\nSo %d + %d = %d...", num1, num2, total);
	
	printf("\n\nEnd of the program...");
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of Programming !!!");
}
int my_input(void) {
	int number;
	
	printf("\n\nPlease enter an integer number: ");
	scanf("%d", &number);
	
	return number;
}

