#include "linked_list_test.h"
#include "Container\linked_list.h"
#include <iostream>
bool list_test() 
{
	list test;
	init(test);

	if (empty(test))
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (size(test) == 0)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	pushFront(test, 9);
	pushFront(test, 23);
	if (size(test) == 2)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (get(test, 1) == 9)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	popFront(test);
	if (size(test) == 1)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (get(test, 0) == 9)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	popFront(test);
	if (size(test) == 0)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (empty(test))
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	list test2;
	init(test2);

	pushBack(test2, 8);
	pushBack(test2, 234);

	if (size(test2) == 2)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (get(test2, 1) == 234)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	popBack(test2);
	if (size(test2) == 1)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (get(test2, 0) == 8)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	popBack(test2);
	if (size(test2) == 0)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (empty(test2))
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);
	
	return true;
}