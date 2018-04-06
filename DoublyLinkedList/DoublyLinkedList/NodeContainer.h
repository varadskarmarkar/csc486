#include "Node.h"
class NodeContainer {
public:
	NodeContainer();
	NodeContainer(NodeContainer& n); //copy constructor
	NodeContainer& operator=(NodeContainer& n); //assignment operator
	~NodeContainer();
	void createList();
	void add(Node* n);
	void addToEnd(Node* n);
	void deleteNode(char c);
	Node* findNode(char c);
	void printList();
	void selectionSort();
public:
	Node* head;
	Node* last;
	int size;
};