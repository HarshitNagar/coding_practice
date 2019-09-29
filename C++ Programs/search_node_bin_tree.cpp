#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

struct Node
{
	Node * left = NULL;
	Node * right = NULL;
	int val;
	Node(int val)
	{
		this->val = val;
	}
};

Node * create_tree()
{
	int val;
	cin>>val;
	if(val == -1)
		return NULL;
	Node * node = new Node(val);
	node->left = create_tree();
	node->right = create_tree();

	return node;
}


bool search(Node * node, int searchVal)
{
	if(node == NULL)
		return false;
	if(node->val == searchVal)
	{
		return true;
	}
	
			
	return search(node->left, searchVal) || search(node->right, searchVal);

}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases;
	cin>>cases;

	while(cases--)
	{
		Node * root = create_tree();
		int searchVal;
		cin>>searchVal;
		cout<<search(root, searchVal);
	}

	return 0;
}