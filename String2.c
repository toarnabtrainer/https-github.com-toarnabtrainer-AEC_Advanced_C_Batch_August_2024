// string processing
#include <stdio.h>
#include <string.h>
int main(void) {
	//               0123456789
	char my_str[] = "unIVERsiTY";
	void str_display(const char []);      // void str_display(char *);
	int my_strlen(const char *);
	char * my_strupr(char []);
	char * my_strlwr(char []);
		
	printf("\nSo the current string is %s...", my_str);
	// str_display(my_str);
	printf("\nLength of the string is %d...", strlen(my_str));
	printf("\nLength of the string is %d...", my_strlen(my_str));
	// printf("\nString in the upper case is %s...", strupr(my_str));
	printf("\nString in the upper case is %s...", my_strupr(my_str));
	printf("\nSo the current string is %s...", my_str);
	
	//printf("\nString in the upper case is %s...", strlwr(my_str));
	printf("\nString in the upper case is %s...", my_strlwr(my_str));
	printf("\nSo the current string is %s...", my_str);
	
	printf("\n\nEnd of the program...");
}
int my_strlen(const char *my_str) {
	int i = 0;
	while (my_str[i] != '\x0') {
		i++;
	}
	return i;
}
void str_display(const char *my_str) {
	int i = 0;
	printf("\n\nDisplaying the content of the string...");
	while (my_str[i] != '\x0') {
		printf("\nIndex Number %d and Content character %c...", i, my_str[i]);
		i++;
	}
}
/*
ASCII Codes: (American Standard Code for Information Interchange)
-----------------------------------------------------------------
8 bit number: ranging from 0 to 255 (2^8 - 1)
Can be categorized in two categories:
Normal ASCII Codes (0 to 127): Printable
A => 65, B => 66, ..., Z => 90
a => 97, b => 98, ..., z => 122
0 => 48, 1 => 49, ..., 9 => 57
Enter => 13, Tab => 8, Back Space => 9, Space => 32, Esc => 27, NULL => 0
Extended ASCII Codes (128 to 255): Non-Printable
*/
char * my_strupr(char my_str[]) {
	int i = 0;
	printf("\n\nDisplaying the content of the string...");
	while (my_str[i] != '\x0') {
		if (my_str[i] >= 'a' && my_str[i] <= 'z') {
			my_str[i] -= 32;
		}
		i++;
	}
	return my_str;
}
char * my_strlwr(char my_str[]) {
	int i = 0;
	printf("\n\nDisplaying the content of the string...");
	while (my_str[i] != '\x0') {
		
		???
		
		i++;
	}
	return my_str;
}















