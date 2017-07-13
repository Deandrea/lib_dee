#include <cstddef>
#include <assert.h>

template <typename T>
list<T>::list()
	:root(NULL)
{

}
template <typename T>
list<T>::~list()
{
	while (!empty())
	{
		popFront();
	}
}
template <typename T>
T &list<T>::get(int index)
{
	assert(!empty() && "Dont call get for empty list!!!!!");
	assert(index < size() && index >= 0 && "Invalid index, omg");

	node<T> *current = this->root;

	while (index > 0)
	{
		index--;
		current = current->next;
	}

	return current->data;

}
template <typename T>
bool list<T>::empty()
{
	if (this->root == NULL)
		return true;

	return false;
}
template <typename T>
int list<T>::size()
{
	if (empty())
		return 0;

	int size = 1;
	node<T>*current = this->root->next;

	while (current)
	{
		size++;
		current = current->next;
	}

	return size;
}
template <typename T>
void list<T>::popBack()
{
	assert(!empty() && "Cannot pop, did stop");
	int s = size();

	if (s > 1)
	{
		int index = s - 2;
		node<T> *current = this->root;

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
template <typename T>
void list<T>::popFront()
{
	assert(!empty());
	node<T> *next = this->root->next;
	delete this->root;
	this->root = next;
}
template <typename T>
void list<T>::pushBack(T value)
{
	if (this->root != NULL)
	{
		node<T> *current = this->root;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new node<T>;
		current->next->data = value;
		current->next->next = NULL;

	}
	else
	{
		this->root = new node<T>;
		this->root->data = value;
		this->root->next = NULL;
	}
}
template <typename T>
void list<T>::pushFront(T value)
{
	node<T> *temp = this->root;
	this->root = new node<T>;
	this->root->data = value;
	this->root->next = temp;

}
