// string processing
#include <stdio.h>
#include <string.h>
int main(void) {
	//               0123456789
	char my_str[] = "university";
	void str_display(char []);      // void str_display(char *);
	int my_strlen(char *);
		
	printf("\nSo the current string is %s...", my_str);
	// str_display(my_str);
	printf("\nLength of the string is %d...", strlen(my_str));
	printf("\nLength of the string is %d...", my_strlen(my_str));
	
	printf("\n\nEnd of the program...");
}
int my_strlen(char *my_str) {
	....
}
void str_display(char *my_str) {
	int i = 0;
	printf("\n\nDisplaying the content of the string...");
	while (my_str[i] != '\x0') {
		printf("\nIndex Number %d and Content character %c...", i, my_str[i]);
		i++;
	}
}
















