#include <stdio.h>
struct date {
	int dd;
	int mm;
	int yy;
};
struct person {
	int age;
	int sal;
	struct date doj;
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
	printf("Please enter date of the joining: ");
	scanf("%d", &pp.doj.dd);
	printf("Please enter month of the joining: ");
	scanf("%d", &pp.doj.mm);
	printf("Please enter year of the joining: ");
	scanf("%d", &pp.doj.yy);
	return pp;
}
void person_display(struct person ppp) {
	printf("\nDisplaying all the data...");
	printf("\nSo age = %d and salary = %d...", ppp.age, ppp.sal);
	printf("\nSo date of joining of the person is %d/%d/%d...", ppp.doj.dd, ppp.doj.mm, ppp.doj.yy);
}
