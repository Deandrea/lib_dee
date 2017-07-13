#include "linked_list_test.h"
#include "Container\linked_list.h"
#include <iostream>
bool list_test() 
{
	list test;

	if (test.empty())
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test.size() == 0)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	test.pushFront(9);
	test.pushFront(23);
	if (test.size() == 2)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test.get(1) == 9)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	test.popFront();
	if (test.size() == 1)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test.get(0) == 9)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	test.popFront();
	if (test.size() == 0)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test.empty())
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	list test2;

	test2.pushBack(8);
	test2.pushBack(234);

	if (test2.size() == 2)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test2.get(1) == 234)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	test2.popBack();
	if (test2.size() == 1)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test2.get(0) == 8)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	test2.popBack();
	if (test2.size() == 0)
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);

	if (test2.empty())
		printf("PASS: %s %li \n", __FILE__, __LINE__);
	else
		printf("FAIL: %s %li \n", __FILE__, __LINE__);
	
	return true;
}