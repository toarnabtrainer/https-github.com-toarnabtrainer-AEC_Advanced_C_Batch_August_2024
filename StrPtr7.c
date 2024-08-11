#include <stdio.h>
#include <stdlib.h>
struct date {
	int dd;
	int *mm;
	int yy;
};
struct person {
	int age;
	int *sal;
	struct date doj;
};
int main(void) {
	struct person p;
	void person_initialize(struct person *);
	void person_display(struct person);
	
	if ((p.sal = (int *)malloc(sizeof(int))) == NULL) {
		printf("\n\nNo memory space found to allocate buffer...");
		exit(1);
	}
	if ((p.doj.mm = (int *)malloc(sizeof(int))) == NULL) {
		printf("\n\nNo memory space found to allocate buffer...");
		exit(1);
	}
	
	person_initialize(&p);
	person_display(p);
	
	printf("\n\nEnd of the program...");
}

void person_initialize(struct person *pp) {
	printf("\nInitializing with user inputs...");
	printf("\nPlease enter the age of the person: ");
	// scanf("%d", &pp->age);   // -> operator denotes implies
	scanf("%d", &(*pp).age);
	printf("Please enetr the salary of the person: ");
	scanf("%d", pp->sal);
	printf("Please enter date of joining: ");
	scanf("%d", &pp->doj.dd);
	printf("Please enter month of joining: ");
	scanf("%d", pp->doj.mm);
	printf("Please enter year of joining: ");
	scanf("%d", &pp->doj.yy);
}
void person_display(struct person ppp) {
	printf("\nDisplaying all the data...");
	printf("\nSo age = %d and salary = %d...", ppp.age, *ppp.sal);
	printf("\nSo date of joining of the person is %d/%d/%d...", ppp.doj.dd, *ppp.doj.mm, ppp.doj.yy);
}
