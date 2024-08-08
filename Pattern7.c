/*
n = 11 (OOD integer number as User Input) m = (n + 1) / 2 = 6


      1  2  3  4  5  6  7  8  9 10 11      row  sp  ep  (sp, ep are the col numbers)
----------------------------------------  ---------------
 1 |  1  1  1  1  1  1  1  1  1  1  1        1   1  11
 2 |  1  2  2  2  2  2  2  2  2  2  1        2   2  10   sp => row
 3 |  1  2  3  3  3  3  3  3  3  2  1        3   3   9
 4 |  1  2  3  4  4  4  4  4  3  2  1        4   4   8   ep => (n - row + 1)
 5 |  1  2  3  4  5  5  5  4  3  2  1        5   5   7   
 6 |  1  2  3  4  5  6  5  4  3  2  2     ___6___6___6___
 7 |  1  2  3  4  5  5  5  4  3  2  1        7   5   7
 8 |  1  2  3  4  4  4  4  4  3  2  1        8   4   8   sp => (n - row + 1)
 9 |  1  2  3  3  3  3  3  3  3  2  1        9   3   9
10 |  1  2  2  2  2  2  2  2  2  2  1       10   2  10   ep => row
11 |  1  1  1  1  1  1  1  1  1  1  1       11   1  11
----------------------------------------  ---------------
*/
#include <stdio.h>
int main(void) {
	int n, m, sp, ep, row, col, start_num;
	while (1) {
		printf("\nPlease enter the ODD number of layers: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	m = (n + 1) / 2;
	printf("\n\nDisplaying the pattern...\n");
	for(row = 1; row <= n; row++) {
		if (row <= m) {sp = row; ep = (n - row + 1);}
		else {sp = (n - row + 1); ep = row;}
		start_num = 1;
		for(col = 1; col <= n; col++) {
			printf("%3d", start_num);
			if (col < sp) start_num++;
			if (col >= ep) start_num--;
		}
		printf("\n");
	}
	printf("\n\nEnd of the program...\n");
}



