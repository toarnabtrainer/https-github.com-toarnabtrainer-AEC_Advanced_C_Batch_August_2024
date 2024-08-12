// string processing
#include <stdio.h>
int main(void) {
	//               0123456789
	char my_str[] = "university";
	void str_display(char []);      // void str_display(char *);
	void str_display1(char []);      // void str_display(char *);
		
	printf("\nSo the current string is %s...", my_str);
	str_display(my_str);
	str_display1(my_str);
	
	// my_str[6] = '\x0';
	// my_str[10] = '-';
	// printf("\nSo the current string is %s...", my_str);
	
	printf("\n\nEnd of the program...");
}

void str_display(char *my_str) {
	int i;
	printf("\n\nDisplaying the content of the string...");
	for(i = 0; i < 10; i++) {
		printf("\nIndex Number %d and Content character %c...", i, my_str[i]);
	}
}

void str_display1(char *my_str) {
	int i = 0;
	printf("\n\nDisplaying the content of the string...");
	while (my_str[i] != '\x0') {
		printf("\nIndex Number %d and Content character %c...", i, my_str[i]);
		i++;
	}
}
















