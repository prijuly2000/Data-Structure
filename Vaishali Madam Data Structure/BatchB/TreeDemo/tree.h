#include"node.h"
///////////////////////////
class Tree
{
	Node *root;
	void Inorder(Node *);
	void Preorder(Node *);
	void Postorder(Node *);
public:
	Tree();
	void Insert(int);
	void Inorder();
	void Preorder();
	void Postorder();
};
