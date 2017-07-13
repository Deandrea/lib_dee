#ifndef LIST_H
#define LIST_H
template <typename T>
class node
{
public:

	T data;
	node *next;

};

template <typename T>
class list
{
public:

	list();
	~list();
	T &get(int index);
	bool empty();
	int size();
	void popBack();
	void popFront();
	void pushBack(T value);
	void pushFront(T value);

private:
	node<T> *root;
};
#include "linked_list.inl"
#endif