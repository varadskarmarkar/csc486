#include "stdafx.h"
#include "NodeContainer.h"

NodeContainer::NodeContainer() {
	head = nullptr;
	last = nullptr;
	size = 0;
}

NodeContainer::NodeContainer(NodeContainer& n) {
	head = n.head;
	last = n.last;
	size = n.size;
}

NodeContainer& NodeContainer::operator=(NodeContainer& n) {
	head = n.head;
	last = n.last;
	size = n.size;

	return *this;
}

NodeContainer::~NodeContainer() {

}

void NodeContainer::add(Node* n) {
	if (head == nullptr) {
		head = n;
		last = n;
	}
	else {
		n->setNext(head);
		head->setPrev(n);
		head = n;
	}
	size++;
}

void NodeContainer::addToEnd(Node* n) {
	if (last == nullptr) {
		head = n;
		last = n;
	}
	else {
		last->setNext(n);
		n->setPrev(last);
		last = n;
	}
	size++;
}

void NodeContainer::deleteNode(char c) {
	Node* n = findNode(c);

	if (n == nullptr) {
		//do nothing
	}
	else {
		if (n->getPrev() != nullptr && n->getNext() != nullptr) {
			//node has a previous and a next
			n->getPrev()->setNext(n->getNext());
			n->getNext()->setPrev(n->getPrev());
		}
		else if (n->getPrev() != nullptr) {
			//node has a previous but not a next -> end of list
			n->getPrev()->setNext(nullptr);
			last = n->getPrev();
		}
		else if (n->getNext() != nullptr) {
			//node has a next but not a previous -> beginning of list
			n->getNext()->setPrev(nullptr);
			head = n->getNext();
		}
		else {
			//only node in list
			head = nullptr;
			last = nullptr;
		}
		printf("Deleted %c\n", n->getChar());
		delete n;
		size--;
	}
	
}

Node* NodeContainer::findNode(char c) {
	Node* current = this->head;
	while (current != nullptr) {
		if (current->getChar() == c) break;
		else current = current->getNext();
	}
	return current;
}

void NodeContainer::selectionSort() {
	Node* current = this->head;
	if (current && current->next)
	{
		Node* newHead = 0;
		Node* newTail = 0;
		Node* min = current;
		while (current != nullptr)
		{
			if (current->getInt() < min->getInt())
			{
				min = current;
			}
			current = current->next;
		}

		if (min->prev != nullptr && min->next != nullptr)
		{
			// not the first node
			// not the last node
			min->prev->next = min->next;
			min->next->prev = min->prev;
		}
		else if (min->prev == nullptr && min->next != nullptr)
		{
			// first node
			min->next->prev = 0;
			this->head = min->next;
		}
		else if (min->prev != nullptr && min->next == nullptr)
		{
			// last node
			min->prev->next = 0;
		}
		else
		{
			// only one node
			this->head = 0;
		}
		newHead = min;
		newTail = min;
		min = current = this->head;
		while (min)
		{

			while (current)
			{
				if (current->getInt() < min->getInt())
				{
					min = current;
				}
				current = current->next;
			}

			if (min->prev && min->next)
			{
				// not the first node
				// not the last node
				min->prev->next = min->next;
				min->next->prev = min->prev;
			}
			else if (!min->prev && min->next)
			{
				// first node
				min->next->prev = 0;
				this->head = min->next;
			}
			else if (min->prev && !min->next)
			{
				// last node
				min->prev->next = 0;
			}
			else
			{
				// only one node
				this->head = 0;
			}
			newTail->next = min;
			min->prev = newTail;
			newTail = min;
			min = current = this->head;
		}
		this->head = newHead;
	}
}

void NodeContainer::printList() {
	if (size > 0) {
		Node* current = head;
		while (current != nullptr) {
			printf("Node int: %d \t Node char: %c\n", current->getInt(), current->getChar());

			current = current->getNext();
		}
		printf("List size: %d \n\n", size);
	}
	else {
		printf("Empty list. \n\n");
	}
}

void NodeContainer::createList() {
	char ch = 65;
	Node* nodeA = new Node(ch, 12); //A
	this->addToEnd(nodeA);
	ch++;

	Node* nodeB = new Node(ch, 2111); //B
	this->addToEnd(nodeB);
	ch++;

	Node* nodeC = new Node(ch, 2121);
	this->addToEnd(nodeC);
	ch++;

	Node* nodeD = new Node(ch, 211);
	this->addToEnd(nodeD);
	ch++;

	Node* nodeE = new Node(ch, 1);
	this->addToEnd(nodeE);
	ch++;

	Node* nodeF = new Node(ch, 1121);
	this->addToEnd(nodeF);
	ch++;

	Node* nodeG = new Node(ch, 221);
	this->addToEnd(nodeG);
	ch++;

	Node* nodeH = new Node(ch, 1111);
	this->addToEnd(nodeH);
	ch++;

	Node* nodeI = new Node(ch, 11);
	this->addToEnd(nodeI);
	ch++;

	Node* nodeJ = new Node(ch, 1222);
	this->addToEnd(nodeJ);
	ch++;

	Node* nodeK = new Node(ch, 212);
	this->addToEnd(nodeK);
	ch++;

	Node* nodeL = new Node(ch, 1211);
	this->addToEnd(nodeL);
	ch++;

	Node* nodeM = new Node(ch, 22);
	this->addToEnd(nodeM);
	ch++;

	Node* nodeN = new Node(ch, 21);
	this->addToEnd(nodeN);
	ch++;

	Node* nodeO = new Node(ch, 222);
	this->addToEnd(nodeO);
	ch++;

	Node* nodeP = new Node(ch, 1221);
	this->addToEnd(nodeP);
	ch++;

	Node* nodeQ = new Node(ch, 2212);
	this->addToEnd(nodeQ);
	ch++;

	Node* nodeR = new Node(ch, 121);
	this->addToEnd(nodeR);
	ch++;

	Node* nodeS = new Node(ch, 111);
	this->addToEnd(nodeS);
	ch++;

	Node* nodeT = new Node(ch, 2);
	this->addToEnd(nodeT);
	ch++;

	Node* nodeU = new Node(ch, 112);
	this->addToEnd(nodeU);
	ch++;

	Node* nodeV = new Node(ch, 1112);
	this->addToEnd(nodeV);
	ch++;

	Node* nodeW = new Node(ch, 122);
	this->addToEnd(nodeW);
	ch++;

	Node* nodeX = new Node(ch, 2112);
	this->addToEnd(nodeX);
	ch++;

	Node* nodeY = new Node(ch, 2122);
	this->addToEnd(nodeY);
	ch++;

	Node* nodeZ = new Node(ch, 2211);
	this->addToEnd(nodeZ);
	ch++;
}