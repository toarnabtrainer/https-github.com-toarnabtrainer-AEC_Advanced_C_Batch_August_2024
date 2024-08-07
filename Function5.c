#include <stdio.h>

int main(void) {
	int num1, num2, total;
	int my_input(void);   // prototype declaration
	void my_welcome(void);
	void my_addition(int, int);
	void my_quit(void);
	
	my_welcome();
	
	num1 = my_input();
	num2 = my_input();
	
	my_addition(num1, num2);
	
	my_quit();
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of Programming !!!");
}
void my_display(int nn1, int nn2, int tt) {
	printf("\nSo the sum of %d and %d is %d...", nn1, nn2, tt);
}
int my_input(void) {
	int number;
	
	printf("\nPlease enter an integer number: ");
	scanf("%d", &number);
	
	return number;
}
void my_addition(int n1, int n2) {
	int sum;
	
	printf("\nPerforming the addition operation...");
	sum = n1 + n2;
	my_display(n1, n2, sum);
}
void my_quit(void) {
	printf("\n\nEnd of the program...");
}
/*
funct1() {
	
}

funct2() {
	
}

funct3() {
	....
	funct4()
}

funct4() {
	
}
*/
