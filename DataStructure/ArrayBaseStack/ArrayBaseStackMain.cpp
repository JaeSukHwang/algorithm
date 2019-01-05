//ArrayBaseStackMain.c
#include <stdio.h>
#include "ArrayBaseStack.h"
#include "ArrayBaseStack.cpp"

int main(void)
{
	Stack stack;
	StackInit(&stack);
	
	SPush(&stack, 1);
	SPush(&stack, 2);
	printf("%d ", SPeek(&stack));
	SPush(&stack, 3);
	SPush(&stack, 4);
	printf("%d \n", SPeek(&stack));
	SPush(&stack, 5);

	while(!SIsEmpty(&stack))
		printf("%d ", SPop(&stack));

	return 0;
}

