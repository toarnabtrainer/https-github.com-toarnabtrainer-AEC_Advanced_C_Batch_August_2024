/*
            38   6
550 = 512 + 32 + 4 + 2 = 0000 0000 0000 0000 0000 0010 0010 0110
                         --------- --------- --------- ---------
                           4003      4002      4001      4000
                           (0)       (0)       (2)       (38)
                           Byte-3    Byte-2    Byte-1    Byte-0
                           Hi Byte                       Low Byte
              76   12           
1100 = 1024 + 64 + 8 + 4 = 0000 0000 0000 0000 0000 0100 0100 1100
                           --------- --------- --------- ---------
                             4003      4002      4001      4000
                             (0)       (0)       (4)       (76)
                             Byte-3    Byte-2    Byte-1    Byte-0
                             Hi Byte                       Low Byte
*/
#include <stdio.h>
int main(void) {
	int i = 1100;
	char *ptr;
	
	ptr = (char *)&i;
	
	printf("\nSo &i = %x, i = %d, &ptr = %x, ptr = %x and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\nSo &i = %X, i = %d, &ptr = %X, ptr = %X and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\n*ptr = %d...", *ptr);
	printf("\n*(ptr + 1) = %d...", *(ptr + 1));
	printf("\n*(ptr + 2) = %d...", *(ptr + 2));
	printf("\n*(ptr + 3) = %d...", *(ptr + 3));
	
	printf("\n\nCurrent address in ptr is %x...", ptr);
	ptr++;
	printf("\nCurrent address in ptr is %x...", ptr);
	++ptr;
	printf("\nCurrent address in ptr is %x...", ptr);
	ptr+=1;
	printf("\nCurrent address in ptr is %x...", ptr);
	ptr = ptr + 1;
	printf("\nCurrent address in ptr is %x...", ptr);
	
	printf("\n\nSizeof(ptr) = %d, sizeof(*ptr) = %d...", sizeof(ptr), sizeof(*ptr));
	
	printf("\n\nEnd of the program...");
}

 








