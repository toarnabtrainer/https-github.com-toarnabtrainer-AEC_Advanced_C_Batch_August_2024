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
