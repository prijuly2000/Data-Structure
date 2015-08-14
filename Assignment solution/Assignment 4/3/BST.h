#include"Node.h"

class BST
{
	
public:
	Node *root;
	BST()
	{
		root=NULL;
	}

	void insert(int data);
	void inorder(Node *);
	void writefile(Node *);
	void readfile();
	
};