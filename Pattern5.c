/*
n = 6 (User input)

               i   ch    .   *
            ---------------------
.....A         1   A-65  5   1        (n, i)
....BBB        2   B-66  4   3   . => (n - i)
...CCCCC       3   C-67  3   5
..DDDDDDD      4   D-68  2   7   * => (2 * i - 1)
.EEEEEEEEE     5   E-69  1   9
FFFFFFFFFFF    6   F-70  0  11   ch => (i + 64)
            ---------------------
            Tracing Table
*/
#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\n\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= (n - i); j++) printf(".");
		for(j = 1; j <= (2 * i - 1); j++) printf("%c", (i + 64));
		printf("\n");
	}
}



