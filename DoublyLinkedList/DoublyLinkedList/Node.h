class Node {
public:
	Node();
	Node(char c, int i);
	Node(Node& n); //copy constructor
	Node& operator=(Node& n); //assignment operator
	~Node();

	void setChar(char c);
	void setInt(int i);
	void setNext(Node* nextNode);
	void setPrev(Node* prevNode);

	char getChar();
	int getInt();
	Node* getNext();
	Node* getPrev();

	void printNode();

public:
	char charRepr;
	int intRepr;
	Node* next;
	Node* prev;
};