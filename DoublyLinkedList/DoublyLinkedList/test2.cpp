#include "stdafx.h"
#include "test.h"
void test_2() {
	NodeContainer* nodes = new NodeContainer();
	nodes->createList();
	char d = 70;
	nodes->deleteNode(d);
	d = 82;
	nodes->deleteNode(d);
	d = 66;
	nodes->deleteNode(d);
	d = 90;
	nodes->deleteNode(d);
	d = 65;
	nodes->deleteNode(d);
	d = 77;
	nodes->deleteNode(d);
	d = 71;
	nodes->deleteNode(d);
	d = 82;
	nodes->deleteNode(d);
	d = 67;
	nodes->deleteNode(d);
	d = 81;
	nodes->deleteNode(d);
	d = 89;
	nodes->deleteNode(d);
	d = 67;
	nodes->deleteNode(d);
	d = 78;
	nodes->deleteNode(d);
	nodes->printList();
}