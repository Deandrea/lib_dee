#include "linked_list.h"
#include <cstddef>
#include <assert.h>
void init(list &list)
{
	list.root = NULL;
}
int &get(list &list, int index)
{
	assert(!empty(list) && "Dont call get for empty list!!!!!");
	assert(index < size(list) && index >= 0 && "Invalid index, omg");

	node *current = list.root;

	while (index > 0)
	{
		index--;
		current = current->next;
	}

	return current->data;

}

bool empty(list &list)
{
	if (list.root == NULL)
		return true;

	return false;
}

int size(list &list)
{
	if (empty(list))
		return 0;

	int size = 1;
	node *current = list.root->next;

	while (current)
	{
		size++;
		current = current->next;
	}

	return size;
}

void popBack(list &list)
{
	assert(!empty(list) && "Cannot pop, did stop");
	int s = size(list);

	if (s > 1)
	{
		int index = s - 2;
		node *current = list.root;

		while (index > 0)
		{
			index--;
			current = current->next;
		}

		assert(current->next != NULL);
		assert(current->next->next == NULL);

		delete current->next;
		current->next = NULL;
	}
	else
	{
		assert(list.root->next == NULL);
		delete list.root;
		list.root = NULL;
	}
}

void popFront(list &list)
{
	assert(!empty(list));
	node *next = list.root->next;
	delete list.root;
	list.root = next;
}

void pushBack(list &list, int value)
{
	if (list.root != NULL)
	{
		node *current = list.root;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new node;
		current->next->data = value;
		current->next->next = NULL;

	}
	else
	{
		list.root = new node;
		list.root->data = value;
		list.root->next = NULL;
	}
}

void pushFront(list &list, int value)
{
	node *temp = list.root;
	list.root = new node;
	list.root->data = value;
	list.root->next = temp;

}
