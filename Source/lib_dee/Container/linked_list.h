#ifndef LIST_H
#define LIST_H

struct node
{
	int data;
	node *next;

};

class list
{
public:

	list();
	~list();
	int &get(int index);
	bool empty();
	int size();
	void popBack();
	void popFront();
	void pushBack(int value);
	void pushFront(int value);

private:
	node *root;
};

#endif