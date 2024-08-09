/*
SPIRAL FILL UP OF A MATRIX (ANTI-CLOCK-WISE)
--------------------------------------------
Fill up a matrix with dimension (nxn), where n has been taken from user input,
with numbers ranging from 1 to n^2, using them once in anti-clock wise spiral manner
starting from top left corner of the matrix.
                            row, col => current row and col numbers
As example -                rr, cc => incr/decr factors along the row and col respectively
if n = 5                              rr, cc => 0, 1, -1
      0   1   2   3   4     row = row + rr;    col = col + cc;
--------------------------    rr   cc                 Limit Check
 0 |  1  16  15  14  13     -----------               1) if(col == n)
 1 |  2  17  24  23  12        1    0   tt = rr       2) if(row == n)
 2 |  3  18  25  22  11        0    1   rr = -cc      3) if(row == -1)
 3 |  4  19  20  21  10       -1    0   cc = tt
 4 |  5   6   7   8   9        0   -1                 Pre-Occupied Check
--------------------------  -----------               1) if (arr[row][col] != 0)
                               1    0
Spiral-2 output: 1 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 17 24 23 22 21 20 19 18 25
*/
#include <stdio.h>
int arr[10][10];
int main(void) {
	int row, col, rr, cc, n, tr, tc, i, tt;
	printf("\n\nPlease enter the dimension of the matrix: ");
	scanf("%d", &n);
	printf("\n\nFilling up the matrix in a spiral anti-clock-wise manner...");
	row = 0; col = 0; rr = 1; cc = 0;
	for (i = 1; i <= n * n; i++) {
		arr[row][col] = i;
		tr = row + rr; tc = col + cc;
		if (tc == n || tr == n || tr == -1 || arr[tr][tc] != 0) {
			tt = rr; rr = -cc; cc = tt;
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
