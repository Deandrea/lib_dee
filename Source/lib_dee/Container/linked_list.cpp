#include "linked_list.h"
#include <cstddef>
#include <assert.h>

list::list()
	:root(NULL)
{

}
list::~list()
{
	while (!empty())
	{
		popFront();
	}
}
int &list::get(int index)
{
	assert(!empty() && "Dont call get for empty list!!!!!");
	assert(index < size() && index >= 0 && "Invalid index, omg");

	node *current = this->root;

	while (index > 0)
	{
		index--;
		current = current->next;
	}

	return current->data;

}

bool list::empty()
{
	if (this->root == NULL)
		return true;

	return false;
}

int list::size()
{
	if (empty())
		return 0;

	int size = 1;
	node *current = this->root->next;

	while (current)
	{
		size++;
		current = current->next;
	}

	return size;
}

void list::popBack()
{
	assert(!empty() && "Cannot pop, did stop");
	int s = size();

	if (s > 1)
	{
		int index = s - 2;
		node *current = this->root;

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
		assert(this->root->next == NULL);
		delete this->root;
		this->root = NULL;
	}
}

void list::popFront()
{
	assert(!empty());
	node *next = this->root->next;
	delete this->root;
	this->root = next;
}

void list::pushBack(int value)
{
	if (this->root != NULL)
	{
		node *current = this->root;
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
		this->root = new node;
		this->root->data = value;
		this->root->next = NULL;
	}
}

void list::pushFront(int value)
{
	node *temp = this->root;
	this->root = new node;
	this->root->data = value;
	this->root->next = temp;

}
