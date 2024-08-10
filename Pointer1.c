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
      1 1 1                                               1 1 0 1
      A B C D    23 = 16 + 7 = 1X16^1 + 7X16^0 = 17h      E F 9 8 2          A  B  C
    + E F 6 A                                           + B C B 6 F          C  D  F
      -------                                             ---------          F  E  F
    1 9 B 3 7 H                                         1 A C 4 F 1 H        -------
                                                                                   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 








