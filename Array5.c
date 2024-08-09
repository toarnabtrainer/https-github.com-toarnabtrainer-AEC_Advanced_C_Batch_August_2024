/*
n = 5
       ------ col---------
       0   1   2   3   4   5   6   7   8
-------------------------------------------
| 0 | 11  23  43  45  56
r 1 | 21  35  55  65  76
o 2 | 10  16  28  51  45
w 3 | 45  74  88  28  24
| 4 | 35  45  41  82  93
  5 |
  6 |
  7 |
  8 |
-------------------------------------------
*/

#include <stdio.h>
int main(void) {
	int arr[9][9] = {{11, 23, 43, 45, 56, 0, 0, 0, 0},
	               {21, 35, 55, 65, 76, 0, 0, 0, 0},
	               {10, 16, 28, 51, 45, 0, 0, 0, 0},
	               {45, 74, 88, 28, 24, 0, 0, 0, 0},
				   {35, 45, 41, 82, 93, 0, 0, 0, 0},
				   {0, 0, 0, 0, 0, 0, 0, 0, 0},
				   {0, 0, 0, 0, 0, 0, 0, 0, 0},
				   {0, 0, 0, 0, 0, 0, 0, 0, 0},
				   {0, 0, 0, 0, 0, 0, 0, 0, 0}};
	int row, col, n = 5, data;
	
	printf("\nFilling up the array with aggregated data...");
	for(row = 0; row < n; row++) {
		for(col = 0; col < n; col++) {
			data = arr[row][col];
			arr[row][n] += arr[row][col];  // row wise total
			arr[n][col] += arr[row][col];  // col wise total
			if (col == 0) arr[row][n + 1] = arr[row][col];  // row wise max
			else if (arr[row][n + 1] < arr[row][col]) arr[row][n + 1] = arr[row][col];
			
			if (row == 0) arr[n + 1][col] = arr[row][col];  // col wise max
			else if (arr[n + 1][col] < arr[row][col]) arr[n + 1][col] = arr[row][col];
			
			if (col == 0) arr[row][n + 2] = arr[row][col];  // row wise min
			else if (arr[row][n + 2] > arr[row][col]) arr[row][n + 2] = arr[row][col];
			if (row == 0) arr[n + 2][col] = arr[row][col];  // col wise min
			else if (arr[n + 2][col] > arr[row][col]) arr[n + 2][col] = arr[row][col];
		}
	}	
	printf("\n\nDisplaying the content of the array...\n");
	for(row = 0; row < n + 4; row++) {
		for(col = 0; col < n + 4; col++) {
			printf("%4d", arr[row][col]);
		}
		printf("\n");
	}
	printf("\nEnd of the program...");
}
