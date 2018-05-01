#ifndef dslib
#define dslib
#include <stdio.h>
#include <stdlib.h>
struct Stack
{
	int stackSize;
    int top;
    int capacity;
    int* array;
};

#endif