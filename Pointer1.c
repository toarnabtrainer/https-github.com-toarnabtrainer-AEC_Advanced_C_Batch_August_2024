/*
int *ptr => means ptr is a variable which contains an address and content of that address is an integer quantity.
char *ptr => means ptr is a variable which contains an address and content of that address is a character quantity.
float *ptr => means ptr is a variable which contains an address and content of that address is a float quantity.
*/
#include <stdio.h>
int main(void) {
	int i = 100;
	int *ptr;
	
	ptr = &i;
	
	printf("\nSo &i = %x, i = %d, &ptr = %x, ptr = %x and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\nSo &i = %X, i = %d, &ptr = %X, ptr = %X and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	
	printf("\n\nCurrent address in ptr is %x...", ptr);
	ptr++;
	printf("\nCurrent address in ptr is %x...", ptr);
	++ptr;
	printf("\nCurrent address in ptr is %x...", ptr);
	ptr+=1;
	printf("\nCurrent address in ptr is %x...", ptr);
	ptr = ptr + 1;
	printf("\nCurrent address in ptr is %x...", ptr);	
	
	printf("\n\nEnd of the program...");
}
/*
      1 1 1                                               1 1 0 1            2  2
      A B C D    23 = 16 + 7 = 1X16^1 + 7X16^0 = 17h      E F 9 8 2          A  B  C
    + E F 6 A                                           + B C B 6 F          C  D  F
      -------                                             ---------          F  E  F
    1 9 B 3 7 H                                         1 A C 4 F 1 H        -------
                           2 2 1                                           2 7  8  A H
      1   1                7 7 6 2                                         
      7 6 1 5              6 5 4 2
    + 7 7 2 6              3 6 7 5
      -------              -------
    1 7 5 4 3 O          2 2 4 2 1 O
                  476   220   92   28   12
    1500 = 1024 + 256 + 128 + 64 + 16 + 8 + 4 = 0000 0101 1101 1100 (10111011100)
                  776   264
    1800 = 1024 + 512 + 256 + 8 = 11100001000 (11100001000) 
 
*/ 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 








