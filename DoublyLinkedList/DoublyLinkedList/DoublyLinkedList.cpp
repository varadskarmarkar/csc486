// DoublyLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NodeContainer.h"

int main()
{
	NodeContainer* nodes = new NodeContainer();


	char ch = 65;
	Node* nodeA = new Node(ch, 12); //A
	nodes->addToEnd(nodeA);
	ch++;

	Node* nodeB = new Node(ch, 2111); //B
	nodes->addToEnd(nodeB);
	ch++;

	Node* nodeC = new Node(ch, 2121);
	nodes->addToEnd(nodeC);
	ch++;

	Node* node = new Node(ch, 211);
	nodes->addToEnd(node);
	ch++;

	//Node* node = new Node(ch, 1);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 1121);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 221);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 1111);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 11);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 1222);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 212);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 1211);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 22);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 21);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 222);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 1221);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 2212);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 121);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 111);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 2);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 112);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 1112);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 122);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 2112);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 2122);
	//nodes->addToEnd(node);
	//ch++;

	//Node* node = new Node(ch, 2211);
	//nodes->addToEnd(node);
	//ch++;

	nodes->printList();

}

