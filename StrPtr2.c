#include <stdio.h>
struct person {
	int age;
	int sal;
};
int main(void) {
	struct person p;
	struct person person_initialize(void);
	void person_display(struct person);
	
	p = person_initialize();
	person_display(p);
	
	printf("\n\nEnd of the program...");
}

struct person person_initialize(void) {
	struct person pp;
	printf("\nInitializing with user inputs...");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &pp.age);
	printf("Please enetr the salary of the person: ");
	scanf("%d", &pp.sal);
	return pp;
}
void person_display(struct person ppp) {
	printf("\nDisplaying all the data...");
	printf("\nSo age = %d and salary = %d...", ppp.age, ppp.sal);
}
