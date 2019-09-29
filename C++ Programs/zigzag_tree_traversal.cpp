#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int inorder(Node* n, int L, int R)
{
	if(n==NULL)
		return 0;
	//return n->data;
	if(n->data>=L && n->data<=R)
		return inorder(n->left, L, R) + (n->data) + inorder(n->right, L, R);
	else
		return inorder(n->left, L, R) + 0 + inorder(n->right, L, R);
	//sum+=n->data;
	//sum+=inorder(n->right, sum);
	//return sum;
}


void print_tree(Node* root)
{
	cout<<root->data<<endl;
	cout<<root->left->data<<" "<<root->right->data<<endl;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(15);
	root->left->left = new Node(3);
	root->left->right = new Node(7);
	//root->right->left = new Node(NULL);
	root->right->right = new Node(18);
	//print_tree(root);
	int L=7;
	int R=15;
	cout<<inorder(root, L, R);
	return 0;
}

/*
   1
 2   3
4 5 6 7
*/