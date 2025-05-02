#include "linkedList.h"

void initList(linkedList* list)
{
	list->head = nullptr;
}

void addToBeginning(linkedList* list , unsigned int newValue)
{
	if (list->head == nullptr)
	{
		list->head = new link();
		list->head->value = newValue;
		list->head->next = nullptr;
		return;
	}

	link* node = new link();
	node->value = newValue;
	node->next = list->head;
	list->head = node;
}

int removeHead(linkedList* list)
{
	link* nodeToRemove = list->head;
	if (nodeToRemove == nullptr)
	{
		return -1;
	}

	list->head = nodeToRemove->next;
	int value = nodeToRemove->value;
	delete nodeToRemove;

	return value;
}

void deleteLink(link* l)
{
	delete l;
}

void cleanList(linkedList* list)
{
	link* current = list->head;
	while (current != nullptr)
	{
		link* next = current->next;
		delete current;
		current = next;
	}
	list->head = nullptr;

}