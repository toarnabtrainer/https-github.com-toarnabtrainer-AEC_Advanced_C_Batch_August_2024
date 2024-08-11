// menu driven program to perform different operations on an array...
#include <stdio.h>
int main(void) {
	int arr[10], n, choice, maxloc;
	int arr_menu(void);
	void arr_create(int [], int *, int);
	void arr_insert(int [], int *, int);
	void arr_delete(int [], int *);
	void arr_update(void);
	void arr_search(const int [], int);
	void arr_sort(void);
	void arr_display(const int [], int, int);
	void arr_exit(void);
	
	choice = 0; maxloc = 10; n = 0;
	while (choice != 8) {
		choice = arr_menu();
		switch(choice) {
			case 1:        // CREATE Operation
				arr_create(arr, &n, maxloc);
				break;
			case 2:        // INSERT Operation
				arr_insert(arr, &n, maxloc);
				break;
			case 3:        // DELETE Operation
				arr_delete(arr, &n);
				break;
			case 4:        // UPDATE Operation
				arr_update();
				break;
			case 5:        // SEARCH Operation
				arr_search(arr, n);
				break;
			case 6:        // SORT Operation
				arr_sort();
				break;
			case 7:        // DISPLAY Operation
				arr_display(arr, n, maxloc);
				break;
			case 8:        // EXIT Operation
				arr_exit();
				break;
		}
	}
	printf("\n\nEnd of the program...");
}

int arr_menu(void) {
	int ch = 0;
	while (ch < 1 || ch > 8) {
		printf("\n\nM A I N  M E N U ...");
		printf("\n~~~~~~~~~~~~~~~~~~~~");
		printf("\n1 >  C R E A T E  O P E R A T I O N ...");
		printf("\n2 >  I N S E R T  O P E R A T I O N ...");
		printf("\n3 >  D E L E T E  O P E R A T I O N ...");
		printf("\n4 >  U P D A T E  O P E R A T I O N ...");
		printf("\n5 >  S E A R C H  O P E R A T I O N ...");
		printf("\n6 >  S O R T  O P E R A T I O N ...");
		printf("\n7 >  D I S P L A Y  O P E R A T I O N ...");
		printf("\n8 >  E X I T  O P E R A T I O N ...");
		printf("\nPlease enter your option number (1 to 8): ");
		scanf("%d", &ch);
	}
	return ch;
}

void arr_create(int a[], int *nn, int maxl) {
	int i;
	
	printf("\n\nCREATE Operation has been selected...");
	while (1) {
		printf("\nPlease enter number of locations (<= %d): ", maxl);
		scanf("%d", nn);
		if (*nn >= 1 && *nn <= maxl) break;
		else printf("\nYour input is not valid...!!!");
	}
	
	for (i = 0; i < *nn; i++) {
		printf("Enter data for location number %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n\nCREATE Operation has been completed successfully...");
}
/*
n = 8, maxloc = 10, loc = 2, new_item = 100
  index :  0   1   2   3   4   5   6   7   8   9
   data : 23  16  54  87  50  81  27  98
                   ^
                   |
              new_item = 100
   target place  <----  Source place     
   8 to 3               7 to 2
   n to (loc + 1)       (n - 1) to loc
*/
void arr_insert(int a[], int *nn, int maxl) {
	int i, new_item, loc;
	printf("\n\nINSERT Operation has been selected...");
	if (*nn == maxl) {
		printf("\nO V E R F L O W !!!");
		printf("\nNo space for insertion...");
	} else {
		printf("\nThere are some space for insert operation...");
		printf("\nPlease enter the location index for insertion: ");
		scanf("%d", &loc);
		printf("Please enter the new item value for insertion: ");
		scanf("%d", &new_item);
		for(i = *nn; i >= (loc + 1); i--) {
			a[i] = a[i - 1];
		}
		a[loc] = new_item;
		(*nn) ++;
		printf("%d has been inserted at location %d...", new_item, loc);
	}
	printf("\n\nINSERT Operation has been completed successfully...");
}
/*
n = 8, maxloc = 10, loc = 2, old_item = 54
  index :  0   1   2   3   4   5   6   7   8   9
   data : 23  16  54  87  50  81  27  98
                   ^
                   |
              old_item = 54
   target place  <----  Source place     
   2 to 6               3 to 7
   loc to (n - 2)       (loc + 1) to (n - 1)
*/
void arr_delete(int a[], int *nn) {
	int i, old_item, loc;
	printf("\n\nDELETE Operation has been selected...");
	if (*nn == 0) {
		printf("\n\nU N D E R F L O W !!!");
		printf("\nNo data remains for deletion operation...");
	} else {
		printf("\nData are present for deletion operation...");
		printf("\n\nPlease enter the location index for deletion: ");
		scanf("%d", &loc);
		old_item = a[loc];
		for(i = loc; i <= (*nn - 2); i++) {   // i is the target index
			a[i] = a[i + 1];
		}
		printf("\nSo data item %d got deleted from the location %d...", old_item, loc);
		
		(*nn)--;
	}
	printf("\n\nDELETE Operation has been completed successfully...");
}
void arr_update(void) {
	printf("\n\nUPDATE Operation has been selected...");
	
	printf("\n\nUPDATE Operation has been completed successfully...");
}
void arr_search(const int a[], int nn) {
	int i, search_item;
	printf("\n\nSEARCH Operation has been selected...");
	if (nn == 0) {
		printf("\n\nThe array has got no data...");
		printf("\nSearching of data items is not possible...");
	} else {
		printf("\n\nPlease enter the search item: ");
		scanf("%d", &search_item);
		for(i = 0; i < nn; i ++) {
			if (a[i] == search_item) {
				printf("\nSUCCESSFUL Searching...!!!");
				printf("\nSo %d has been found at the index %d...", search_item, i);
				break;
			}
		}
		if (i == nn) {
			printf("\nUNSUCCESSFUL Searching...!!!");
			printf("\n%d has not been found in the array...", search_item);
		}
	}
	
	printf("\n\nSEARCH Operation has been completed successfully...");
}
void arr_sort(void) {
	printf("\n\nSORT Operation has been selected...");
	
	printf("\n\nSORT Operation has been completed successfully...");
}
void arr_display(const int a[], int nn, int maxl) {
	int i;
	printf("\n\nDISPLAY Operation has been selected...");
	if (nn == maxl) {
		printf("\n\nThe array is completely filled up...");
	}
	printf("\nDisplaying the current content of the array...");
	for(i = 0; i < nn; i++) {
		printf("\nLocation number = %d and content = %d...", i, a[i]);
	}
	
	printf("\n\nDISPLAY Operation has been completed successfully...");
}
void arr_exit(void) {
	printf("\n\nEXIT Operation has been selected...");
	printf("\n\nGood Bye and Have a Nice Day....");
}




