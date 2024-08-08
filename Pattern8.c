/*
n = 13 (OOD integer number as User Input) m = (n + 1) / 2 = (13 + 1) / 2 = 7
                   i   *1   .  *2
                --------------------      (i, n, m)
*************      1   13   -   -   *1 => n
******.******      2    6   1   6
*****...*****      3    5   3   5   *1 => (m - i + 1)
****.....****      4    4   5   4   . =>  (2 * i - 3)
***.......***      5    3   7   3   *2 => (m - i + 1)
**.........**      6    2   9   2
*...........*   ___7____1__11___1___
**.........**      8    2   9   2
***.......***      9    3   7   3   *1 => (i - m + 1)
****.....****     10    4   5   4   . =>  (2 * (n - i) - 1)
*****...*****     11    5   3   5   *2 => (i - m + 1)
******.******     12    6   1   6
*************     13   13   -   -   *1 => n
                --------------------
                   Tracing Table
*/                
#include <stdio.h>
int main(void) {
	int i, j, n, m, s, b;
	while (1) {
		printf("\nPlease enter the ODD number of layers: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	m = (n + 1) / 2;
	for(i = 1; i <= n; i++) {
		if(i == 1 || i == n) {
			for(j = 1; j <= n; j++) printf("*");
		} else {
			if(i <= m) {s = (m - i + 1); b = (2 * i - 3);}
			else {s = (i - m + 1); b = (2 * (n - i) - 1);}
			for(j = 1; j <= s; j++) printf("*");
			for(j = 1; j <= b; j++) printf(".");
			for(j = 1; j <= s; j++) printf("*");			
		}
		printf("\n");
	}
}
