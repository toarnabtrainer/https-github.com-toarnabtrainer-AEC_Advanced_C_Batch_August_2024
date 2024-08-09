/*
Triode Number:
--------------
Find out all possble 3-digit Triode Numbers.
Let x be a Triode Number, then x, 2*x and 3*x will have all distinct digits.

As example:
	if x = 219, then 2*x = 438 and 3*x = 657, all these three numbers having all distinct digits
	So x = 219 is a Triode Number.
	
	if x = 192, then 2*x = 384 and 3*x = 576, all these three numbers having all distinct digits
	So x = 192 is a Triode Number.
	
for num = 102 to 498
	intialize a[10] with all 0's
	for times = 1 to 3
		x = times * num
		while (x != 0)
			digit = x % 10
			if (a[digit] != 0) then ussuccessful and break
			else a[digit] = 1
			x = int(x / 10)
		end while
		if (unsuccessful) then break
	end for
	if successful then print num
end for

  x => 3
2*x => 3    4
3*x => 3,4  4
*/
#include <stdio.h>
int main(void) {
	int x, num, digit, a[10], times, i;
	for(num = 102; num <= 498; num++) {
		for (i = 0; i < 10; i++) a[i] = 0;
		for (times = 1; times <= 3; times++) {
			x = times * num;
			while (x != 0) {
				digit = x % 10;
				if (a[digit] != 0) break;
				else a[digit] = 1;
				x = x / 10;
			}
			if (x != 0) break;
		}
		if (x == 0) printf("\n%d, %d and %d...", num, 2*num, 3*num);
	}
	printf("\n\nEnd of the program...");
}

















