#include <stdio.h>
union record {
	int int_var;
	char char_var;
};

int main(void) {
	union record rec;
	
	printf("\n\nInitializing and displaying union variables...");
	
	rec.int_var = 1640;
	printf("\n\nrec.int_var = %d...", rec.int_var);
	printf("\nrec.char_var = %d and %c...", rec.char_var, rec.char_var);
	
	rec.char_var = 'A';
	printf("\n\nrec.int_var = %d...", rec.int_var);
	printf("\nrec.char_var = %d and %c...", rec.char_var, rec.char_var);
	
	printf("\n\nEnd of the program...");
}
/*
double dd    => .... .... .... .... .... .... .... .... .... .... .... .... .... .... .... ....
                --------- --------- --------- --------- --------- --------- --------- --------- 
                Byte 7    Byte 6    Byte 5    Byte 4    Byte 3    Byte 2    Byte 1    Byte 0
int ii       =>                                         .... .... .... .... .... .... .... ....
short int si =>                                                             .... .... .... ....
char cc      =>                                                                       .... ....

                         616   104  40
int_var = 1640 = 1024 +  512 + 64 + 32 + 8 = 0000 0000 0000 0000 0000 0110 0110 1000
                                             --------- --------- --------- ---------
char_var = 0110 1000 => 104 (h)                                   
char_var = 'A' = 65 = 64 + 1 =                                             0100 0001
int_var =>                                   0000 0000 0000 0000 0000 0110 0100 0001
                                             = 1024+512+65 = 1601

*/












