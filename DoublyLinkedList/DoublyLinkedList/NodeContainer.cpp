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

void NodeContainer::deleteNode(Node* n) {
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

		delete n;
		size--;
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

void NodeContainer::sortNodesByInt() {

}

void NodeContainer::sortNodesByChar() {

}