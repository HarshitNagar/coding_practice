#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

struct Node
{
	int data;
	Node * left = NULL;
	Node * right = NULL;
	Node(int data)
	{
		this->data = data;
	}
};

Node * create_tree()
{
	int data;
	cin>>data;
	if(data == -1)
		return NULL;
	Node * temp = new Node(data);
	temp->left = create_tree();
	temp->right = create_tree();

	return temp;
}

bool check_bst(Node * temp, int min, int max)
{
	cout<<"hello";
	if(temp == NULL)
		return true;
	if(temp->left->data >= temp->data || temp->right->data <= temp->data)
		return false;
	return check_bst(temp->left, min, temp->data - 1) && check_bst(temp->right, temp->data + 1, max);
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
		Node * root = new Node(0);
		root = create_tree();
		cout<<"mellow";
		cout<<check_bst(root, INT_MIN, INT_MAX);
	}

	return 0;
}