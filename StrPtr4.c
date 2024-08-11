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
	struct person p[5];
	int i;
	struct person person_initialize(void);
	void person_display(struct person);
	
	printf("\n\nInitialize with user inputs...");
	for(i = 0; i < 5; i++) {
		printf("\nEnter information for person number %d...", i);
		p[i] = person_initialize();
	}
	printf("\nDisplaying all the contents...");
	for(i = 0; i < 5; i++) {
		printf("\nDisplaying information for person number %d...", i);
		person_display(p[i]);
	}
	
	printf("\n\nEnd of the program...");
}

struct person person_initialize(void) {
	struct person pp;
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
	printf("\nSo age = %d and salary = %d...", ppp.age, ppp.sal);
	printf("\nSo date of joining of the person is %d/%d/%d...", ppp.doj.dd, ppp.doj.mm, ppp.doj.yy);
}
