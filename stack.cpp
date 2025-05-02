#include "stack.h"

void push(stack* s, unsigned int element)
{
	addToBeginning(s->valuesList, element);
}

int pop(stack* s)
{
	return removeHead(s->valuesList);
}

void initStack(stack* s)
{
	s->valuesList = new linkedList;
	initList(s->valuesList);
}


void cleanStack(stack *s)
{
	cleanList(s->valuesList);
	delete s->valuesList;

}

bool isEmpty(stack *s)
{
	if (s->valuesList->head == nullptr)
		return true;
	return false;
}

bool isFull(stack* s)
{
	// can never be full. because it is based on linked list
	return false;
}
