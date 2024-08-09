/*
n = 5
       ------ col---------
       0   1   2   3   4
--------------------------
| 0 |  1   2   3   4   5
r 1 |  2   2   3   4   5
o 2 |  3   3   3   4   5
w 3 |  4   4   4   4   5
| 4 |  5   5   5   5   5
--------------------------
*/

#include <stdio.h>
int main(void) {
	int arr[10][10], row, col, n;
	printf("\nPlease enter the dimension of the matrix: ");
	scanf("%d", &n);
	
	printf("\nFilling up the array with data...");
	for(row = 0; row < n; row++) {
		for(col = 0; col < n; col++) {
			arr[row][col] = 1 + ((row > col)? row : col);
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
