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
void my_display(int nn1, int nn2, int tt) {
	printf("\nSo the sum of %d and %d is %d...", nn1, nn2, tt);
}
void my_quit(void) {
	printf("\n\nEnd of the program...");
}
