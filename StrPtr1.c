#include <stdio.h>
struct person {
	int age;
	int sal;
};
int main(void) {
	struct person p;
	
	printf("\nInitializing with user inputs...");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &p.age);
	printf("Please enetr the salary of the person: ");
	scanf("%d", &p.sal);
	
	printf("\nDisplaying all the data...");
	printf("\nSo age = %d and salary = %d...", p.age, p.sal);
	
	printf("\n\nSo sizeof(p) = %d, sizeof(p.age) = %d and sizeof(p.sal) = %d...", 
											sizeof(p), sizeof(p.age), sizeof(p.sal));
	
	printf("\n\nEnd of the program...");
}


