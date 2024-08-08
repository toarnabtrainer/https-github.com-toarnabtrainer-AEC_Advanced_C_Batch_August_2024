#include <stdio.h>

int main(void) {
	int day, medi;
	
	printf("\nVisit Doctor...");    // 1 time
	for(day = 1; day <= 5; day++) {
		printf("\nGood Morning...");    // 5 times
		for(medi = 1; medi <= 3; medi++) {
			printf("\nDay no - %d and Medicine no - %d...", day, medi);    // 15 times
		}
		printf("\nGood Night...");    // 5 times
		printf("\n---------------------------------------");    // 5 times
	}
	printf("\nThanks to Doctor...");    // 1 time
	printf("\n\nEnd of the story...");    // 1 time
}
