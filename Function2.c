#include <stdio.h>
int main(void) {
	int total;
	int my_input1(void);   // prototype declaration
	int my_input2(void);   // prototype declaration
	void my_welcome(void);
	int my_addition(int, int);
	void my_display(int);
	void my_quit(void);
	
	my_welcome();
	
	total = my_addition(my_input1(), my_input2());
	
	my_display(total);
	
	my_quit();
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of Programming !!!");
}
int my_input1(void) {
	int number;
	
	printf("\nPlease enter the first integer number: ");
	scanf("%d", &number);
	
	return number;
}
int my_input2(void) {
	int number;
	
	printf("\nPlease enter the second integerr number: ");
	scanf("%d", &number);
	
	return number;
}
int my_addition(int n1, int n2) {
	int sum;
	printf("\nPerforming the addition operation...");
	sum = n1 - n2;
	return sum;
}
void my_display(int tt) {
	printf("\nSo the sum is %d...", tt);
}
void my_quit(void) {
	printf("\n\nEnd of the program...");
}
