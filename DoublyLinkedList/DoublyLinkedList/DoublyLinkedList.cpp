// DoublyLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NodeContainer.h"

int main()
{
	NodeContainer* nodes = new NodeContainer();


	char ch = 65;
	int in = 65;
	Node* A = new Node(ch, in);
	A->printNode();
	nodes->addToEnd(A);
	ch++;
	in++;

	Node* B = new Node(ch, in);
	nodes->addToEnd(B);
	ch++;
	in++;

	Node* C = new Node(ch, in);
	nodes->addToEnd(C);
	ch++;
	in++;

	Node* D = new Node(ch, in);
	nodes->addToEnd(D);
	ch++;
	in++;

	nodes->printList();

	//delete middle
	nodes->deleteNode(B);
	nodes->printList();

	//delete end
	nodes->deleteNode(D);
	nodes->printList();

	//delete head
	nodes->deleteNode(A);
	nodes->printList();

	//delete single
	nodes->deleteNode(C);
	nodes->printList();
}

