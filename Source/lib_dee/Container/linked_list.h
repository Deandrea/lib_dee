#ifndef LIST_H
#define LIST_H

struct node
{
	int data;
	node *next;

};

struct list
{
	node *root;
};

void init(list &list);
int &get(list &list, int index);
bool empty(list &list);
int size(list &list);
void popBack(list &list);
void popFront(list &list);
void pushBack(list &list, int value);
void pushFront(list &list, int value);

#endif