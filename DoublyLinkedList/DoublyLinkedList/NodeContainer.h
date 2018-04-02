#include "Node.h"
class NodeContainer {
public:
	NodeContainer();
	NodeContainer(NodeContainer& n); //copy constructor
	NodeContainer& operator=(NodeContainer& n); //assignment operator
	~NodeContainer();

	void add(Node* n);
	void addToEnd(Node* n);
	void deleteNode(Node* n);
	void printList();
	void sortNodesByInt();
	void sortNodesByChar();

public:
	Node* head;
	Node* last;
	int size;
};