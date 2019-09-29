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

void swap(Node * &node, Node * &mirror)
{
	int temp = node->val;
	node->val = mirror->val;
	mirror->val = temp;
}

void mirror_perfect_tree(Node * node, Node * mirror, int &count, int numOfNodes)
{
	if(node == NULL || count == numOfNodes)
	{
		return;
	}
	count++;
	
	cout<<node->val<<" "<<mirror->val<<endl;
	int temp = node->val;
	node->val = mirror->val;
	mirror->val = temp;
	cout<<node->val<<" "<<mirror->val<<endl;

	mirror_tree(node->left, mirror->right, count, numOfNodes);
	mirror_tree(node->right, mirror->left, count, numOfNodes);
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
		int numOfNodes, count=0;
		cin>>numOfNodes;
		Node * root = create_tree();

		preorder(root);
		cout<<endl;

		mirror_perfect_tree(root, root, count, ceil((numOfNodes+1)/2));
		cout<<endl;

		preorder(root);
		cout<<endl;

		
		
	}
    
    return 0;
}