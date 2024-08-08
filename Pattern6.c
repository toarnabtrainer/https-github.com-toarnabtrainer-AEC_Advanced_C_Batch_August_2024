/*
n = 6 (User input)

               i   .   *
            ---------------
abcdefghijk    1   0  11        (n, i)
.abcdefghi     2   1   9   . => (i - 1)
..abcdefg      3   2   7
...abcde       4   3   5   * => (2 * (n - i) + 1)
....abc        5   4   3
.....a         6   5   1   ch => (96 + col)
            ---------------
            Tracing Table
*/
#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\n\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= (i - 1); j++) printf(".");
		for(j = 1; j <= (2 * (n - i) + 1); j++) printf("%c", j + 96);
		printf("\n");
	}
}



