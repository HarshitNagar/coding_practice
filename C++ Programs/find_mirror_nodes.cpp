#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

struct Node
{
    int val;
    Node * left=NULL;
    Node * right=NULL;
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

void preorder(Node * node)
{
	if(node == NULL)
		return;
	cout<<node->val<<" ";
	preorder(node->left);
	preorder(node->right);

}


int mirror_search(Node * node, Node * mirror, int searchVal)
{
	if(mirror == NULL || node == NULL)
		return -1;
	if(node->val == searchVal)
		return mirror->val;
	int x = mirror_search(node->left, mirror->right, searchVal);
	int y = mirror_search(node->right, mirror->left, searchVal);
	if(x==-1 && y==-1)
		return -1;
	if(x!=-1)
		return x;
	else
		return y;

}

int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		int cases;
		cin>>cases;
	while(cases--)
	{
		Node * root = create_tree();
		int queries, searchVal;
		preorder(root);
		cout<<endl;
		cin>>queries;
		while(queries--)
		{
			cin>>searchVal;
			cout<<searchVal<<" "<<mirror_search(root, root, searchVal)<<endl;
		}
		
	}
    
    return 0;
}