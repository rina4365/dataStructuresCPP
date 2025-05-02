#include "utils.h"
#include "stack.h"

void reverse(int *nums, unsigned int size)
{
	stack* s = new stack;
	initStack(s);
	for (int i = 0; i < size; i++)
	{
		push(s, *(nums + i));
	}
	for (int i = 0; i < size; i++)
	{
		*(nums + i) = pop(s);
	}
}