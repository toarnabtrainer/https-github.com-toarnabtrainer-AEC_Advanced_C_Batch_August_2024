#include <stdio.h>
int num1, num2, total;   // global variables
int main(void) {
	void my_input(int);   // prototype declaration
	void my_welcome(void);
	void my_addition(void);
	void my_display(void);
	void my_quit(void);
	
	my_welcome();
	
	my_input(1);
	my_input(2);
	
	my_addition();
	my_display();
	my_quit();
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of Programming !!!");
}
void my_input(int turn) {
	if (turn == 1) {
		printf("\nPlease enter an integer for the first number: ");
		scanf("%d", &num1);
	} else {
		printf("\nPlease enter an integer for the second number: ");
		scanf("%d", &num2);		
	}
}
void my_addition(void) {
	printf("\nPerforming the addition operation...");
	total = num1 + num2;
}
void my_display(void) {
	printf("\nSo the sum of %d and %d is %d...", num1, num2, total);
}
void my_quit(void) {
	printf("\n\nEnd of the program...");
}
