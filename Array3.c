/*
n = 5 (ODD Dimension)
       ------ col---------
       0   1   2   3   4     row  dcol  rdcol
--------------------------  ------------------
| 0 | 10   0   0   0  20      0    0      4
r 1 |  0  10   0  20   0      1    1      3
o 2 |  0   0  30   0   0      2    2      2  row + rdcol = (n - 1)
w 3 |  0  20   0  10   0      3    3      1
| 4 | 20   0   0   0  10      4    4      0
--------------------------  ------------------
*/

#include <stdio.h>
int arr[10][10];
int main(void) {
	int row, col, n;
	while(1) {
		printf("\nPlease enter the dimension of the matrix: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	printf("\nFilling up the array with data...");
	for(row = 0; row < n; row++) {
		for(col = 0; col < n; col++) {
			if (row == col) arr[row][col] = 10;
			if (row + col == n - 1) arr[row][col] += 20;
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
