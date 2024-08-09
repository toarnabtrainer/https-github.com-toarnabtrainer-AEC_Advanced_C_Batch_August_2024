/*
SPIRAL FILL UP OF A MATRIX (CLOCK-WISE)
--------------------------------------
Fill up a matrix with dimension (nxn), where n has been taken from user input,
with numbers ranging from 1 to n^2, using them once in clock wise spiral manner
starting from top left corner of the matrix.
                            row, col => current row and col numbers
As example -                rr, cc => incr/decr factors along the row and col respectively
if n = 5                              rr, cc => 0, 1, -1
      0   1   2   3   4     row = row + rr;    col = col + cc;
--------------------------    rr   cc                 Limit Check
 0 |  1   2   3   4   5     -----------               1) if(col == n)
 1 | 16  17  18  19   6        0    1   tt = rr       2) if(row == n)
 2 | 15  24  25  20   7        1    0   rr = cc       3) if(col == -1)
 3 | 14  23  22  21   8        0   -1   cc = -tt
 4 | 13  12  11  10   9       -1    0                 Pre-Occupied Check
--------------------------  -----------               1) if (arr[row][col] != 0)
                               0    1
*/
#include <stdio.h>
int arr[10][10];
int main(void) {
	int row, col, rr, cc, n, tr, tc, i, tt;
	printf("\n\nPlease enter the dimension of the matrix: ");
	scanf("%d", &n);
	printf("\n\nFilling up the matrix in a spiral clock-wise manner...");
	row = 0; col = 0; rr = 0; cc = 1;
	for (i = 1; i <= n * n; i++) {
		arr[row][col] = i;
		tr = row + rr; tc = col + cc;
		if (tc == n || tr == n || tc == -1 || arr[tr][tc] != 0) {
			tt = rr; rr = cc; cc = -tt;
		}
		row = row + rr; col = col + cc;
	}
	printf("\nDisplaying the content of the matrix...\n");
	for (row = 0; row < n; row ++) {
		for (col = 0; col < n; col ++) {
			printf("%4d", arr[row][col]);
		}
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
