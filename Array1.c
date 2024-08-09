/*
n = 5
       ------ col---------
       0   1   2   3   4
--------------------------
| 0 |  1   2   3   4   5   =>  1 + col
r 1 |  6   7   8   9  10   =>  6 + col
o 2 | 11  12  13  14  15   => 11 + col => (row * n) + 1 + col
w 3 | 16  17  18  19  20   => 16 + col
| 4 | 21  22  23  24  25   => 21 + col
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
			arr[row][col] = (row * n) + 1 + col;
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
