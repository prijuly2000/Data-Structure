#include"Node.h"

class Tree
{
	
	Node *root;
	void Inorder(Node *root);
	void Preorder(Node *root);
	void Postorder(Node *root);
public:
	Tree();
	void Insert(int );
	void Inorder();
	void Preorder();
	void Postorder();
	void Delete(int);

};