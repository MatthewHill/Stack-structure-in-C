#include <stdio.h>
#include <stdlib.h>
#include "stack.c"
int main()
{
    struct Stack* stack = stack_init(100);
	   printf("%d popped from stack\n", stack_pop(stack));
	stack_push(stack, 12);
    printf("%d pushed onto the stack\n", 12);
   stack_push(stack, 14);
    printf("%d pushed onto the stack\n", 14);
	stack_push(stack, 9);
    printf("%d pushed onto the stack\n", 9);
	printf("Stack size is %d\n", stack_size(stack));
	stack_deallocate(stack);
	printf("Stack size is %d\n", stack_size(stack));
    printf("%d popped from stack\n", stack_pop(stack));
    return 0;
}