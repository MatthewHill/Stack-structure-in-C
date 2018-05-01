#include <stdio.h>
#include <stdlib.h>
#include "dslib.h"
struct Stack* stack_init(int capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
	stack->stackSize = 0;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}
int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack* stack)
{ 
  return stack->top == -1;
 }
void stack_push(struct Stack* stack, int input)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = input;
	stack->stackSize = stack->stackSize+1;
}
int stack_pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return NULL;
	stack->stackSize = stack->stackSize-1;
    return stack->array[stack->top--];
}
void stack_deallocate(struct Stack* stack)
{
	free(stack);
	free(stack->array);
	int temp =stack_pop(stack);
	stack->stackSize = stack->stackSize + 1;
}
int stack_size(struct Stack* stack)
{
	return stack->stackSize;
}
