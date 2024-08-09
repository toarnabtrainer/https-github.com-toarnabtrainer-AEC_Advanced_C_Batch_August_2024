/*
n = 5
       ------ col---------
       0   1   2   3   4
--------------------------
| 0 |  1   6  11  16  21
r 1 |  2   7  12  17  22
o 2 |  3   8  13  18  23
w 3 |  4   9  14  19  24
| 4 |  5  10  15  20  25
--------------------------
*/

#include <stdio.h>
int main(void) {
	int arr[10][10], row, col, n = 5;
	printf("\nPlease enter the dimension of the matrix: ");
	scanf("%d", &n);
	
	printf("\nFilling up the array with data...");
	for(row = 0; row < n; row++) {
		for(col = 0; col < n; col++) {
			arr[row][col] = (col * n) + 1 + row;
		}
	}	
	printf("\n\nDisplaying the content of the array...\n");
	for(row = 0; row < n; row++) {
		for(col = 0; col < n; col++) {
			printf("%4d", arr[row][col]);
		}
		printf("\n");
	}
	printf("\nEnd of the program...");
}
