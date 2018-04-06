#include "stdafx.h"
#include "test.h"
void test_3() {
	NodeContainer* nodes = new NodeContainer();
	nodes->createList();
	nodes->selectionSort();
	nodes->printList();
}