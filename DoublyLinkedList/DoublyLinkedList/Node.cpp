#include "stdafx.h"
#include "Node.h"

Node::Node() {
	charRepr = 0;
	intRepr = 0;
	next = nullptr;
	prev = nullptr;
}

Node::Node(char c, int i) {
	charRepr = c;
	intRepr = i;
	next = nullptr;
	prev = nullptr;
}

Node::Node(Node& n) {
	charRepr = n.charRepr;
	intRepr = n.intRepr;
	next = n.next;
	prev = n.prev;
}

Node& Node::operator=(Node& n) {
	charRepr = n.charRepr;
	intRepr = n.intRepr;
	next = n.next;
	prev = n.prev;

	return *this;
}

Node::~Node() {

}

void Node::setChar(char c) {
	charRepr = c;
}

void Node::setInt(int i) {
	intRepr = i;
}

void Node::setNext(Node* nextNode) {
	next = nextNode;
}

void Node::setPrev(Node* prevNode) {
	prev = prevNode;
}

char Node::getChar() {
	return charRepr;
}

int Node::getInt() {
	return intRepr;
}

Node* Node::getNext() {
	return next;
}

Node* Node::getPrev() {
	return prev;
}

void Node::printNode() {
	printf("Node int: %d \t Node char: %c\n\n", intRepr, charRepr);
}