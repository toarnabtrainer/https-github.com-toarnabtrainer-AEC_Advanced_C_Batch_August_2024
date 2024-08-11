/*
Stack Implementation using Array:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Stack is FILO or LIFO Data Structure

Index =>   0   1   2   3   4   5   6   7       TOP   Maxstack Operation
-----------------------------------------------------------------------------------
Stack                                          -1    8        [Stack is EMPTY]
Stack      11  67  89                           2             PUSH 11, PUSH 67, PUSH 89
Stack      11  67  89  76  23  41  55  72       7             PUSH 76, PUSH 23, PUSH 41, PUSH 55, PUSH 72
Stack      11  67  89  76  23  41  55  72       7             PUSH 100 (OVERFLOW)
Stack      11  67  89  76  23                   4             POP (72), POP (55), POP (41)                        
Stack      11  67                               1             POP (23), POP (76), POP (89)
Stack                                          -1             POP (67), POP (11)
Stack                                          -1             POP (UNDERFLOW)
-----------------------------------------------------------------------------------

algorithm stack_push(stack, top, maxstack, item)
	if (top == maxstack - 1) then
		print("OVERFLOW")
		exit
	end if
	top = top + 1
	stack[top] = item
	
algorithm stack_pop(stack, top)
	if (top == -1) then
		print("UNDERFLOW")
		exit
	end if
	item = stack[top]
	top = top - 1
*/
#include <stdio.h>
int main(void) {
	int stack[8], top, maxstack, choice;
	int stack_menu(void);
	void stack_pop(int [], int *, int);
	void stack_push(int [], int *, int);
	void stack_display(const int [], int, int);
	void stack_exit(void);
	
	top = -1; maxstack = 8; choice = 0;
	while (choice != 4) {
		choice = stack_menu();
		switch(choice) {
			case 1:      // PUSH Operation...
				stack_push(stack, &top, maxstack);
				break;
			case 2:      // POP Operation...
				stack_pop(stack, &top, maxstack);
				break;
			case 3:      // DISPLAY Operation...
				stack_display(stack, top, maxstack);
				break;
			case 4:      // EXIT Operation...
				stack_exit();
				break;
		}
	}
	printf("\n\nEnd of the program...");
}

int stack_menu(void) {
	int ch = 0;
	
	while (ch < 1 || ch > 4) {
		printf("\n\nM A I N  M E N U ...");
		printf("\n~~~~~~~~~~~~~~~~~~~~");
		printf("\n1 >  P U S H  O P E R A T I O N ...");
		printf("\n2 >  P O P  O P E R A T I O N ...");
		printf("\n3 >  D I S P L A Y  O P E R A T I O N ...");
		printf("\n4 >  E X I T  O P E R A T I O N ...");
		printf("\nPlease enter the choice number: ");
		scanf("%d", &ch);
	}
	return ch;
}
/*
algorithm stack_push(stack, top, maxstack, item)
	if (top == maxstack - 1) then
		print("OVERFLOW")
		exit
	end if
	top = top + 1
	stack[top] = item
*/
void stack_push(int stk[], int *tp, int maxstk) {
	int new_item;
	printf("\n\nStack PUSH operation option has been selected...");
	if (*tp == maxstk - 1) {
		printf("\n\nO V E R F L O W !!!");
		printf("\nNo space for PUSH Operation");
	} else {
		printf("\n\nThere is a room for stack PUSH Operation...");
		printf("\nPlease enter the new item values: ");
		scanf("%d", &new_item);
		(*tp)++;
	    stk[*tp] = new_item;
	    printf("\nItem %d has been pushed at the index %d...", new_item, *tp);
	}
	printf("\nStack PUSH operation has been completed successfully...");
}
/*
algorithm stack_pop(stack, top)
	if (top == -1) then
		print("UNDERFLOW")
		exit
	end if
	item = stack[top]
	top = top - 1
*/
void stack_pop(int stk[], int *tp, int maxstk) {
	int pop_item;
	printf("\n\nStack POP operation option has been selected...");
	if (*tp == -1) {
		printf("\n\nU N D E R F L O W !!!");
		printf("\nNo data for pop operation available...");
	} else {
		printf("\n\nData items are available for pop operation...");
		pop_item = stk[*tp];
		printf("\n\n%d has been popped from the stack from the index %d...", pop_item, *tp);
		(*tp)--;
	}	
	printf("\nStack POP operation has been completed successfully...");
}
void stack_display(const int stk[], int tp, int maxstk) {
	int i;
	printf("\n\nStack DISPLAY operation option has been selected...");
	if (tp == -1) {
		printf("\n\nStack is EMPTY !!!");
		printf("\nNo data found for the display operation...");
	} else {
		if (tp == maxstk - 1) {
			printf("\n\nThe stack is completely filled up...");
		} 
		printf("\nPerforming the content display of the stack...");
		for(i = tp; i >= 0; i--) {
				printf("\nLocation index %d and content %d...", i, stk[i]);
		}
	}
	printf("\nStack DISPLAY operation has been completed successfully...");
}
void stack_exit(void) {
	printf("\n\nEXIT POP operation option has been selected...");
	printf("\nExiting from the menu...");
}










